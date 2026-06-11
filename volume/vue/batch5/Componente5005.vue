<template>
  <section class="panel-5005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5005");
const base = ref(5005);
const total = computed(() => base.value * 2);

function incrementar5005() {
  base.value++;
}
</script>
