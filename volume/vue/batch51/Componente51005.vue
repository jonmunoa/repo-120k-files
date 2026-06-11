<template>
  <section class="panel-51005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51005");
const base = ref(51005);
const total = computed(() => base.value * 2);

function incrementar51005() {
  base.value++;
}
</script>
