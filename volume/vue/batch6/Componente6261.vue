<template>
  <section class="panel-6261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6261");
const base = ref(6261);
const total = computed(() => base.value * 2);

function incrementar6261() {
  base.value++;
}
</script>
