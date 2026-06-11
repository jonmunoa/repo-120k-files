<template>
  <section class="panel-6489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6489");
const base = ref(6489);
const total = computed(() => base.value * 2);

function incrementar6489() {
  base.value++;
}
</script>
