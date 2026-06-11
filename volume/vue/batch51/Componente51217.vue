<template>
  <section class="panel-51217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51217");
const base = ref(51217);
const total = computed(() => base.value * 2);

function incrementar51217() {
  base.value++;
}
</script>
