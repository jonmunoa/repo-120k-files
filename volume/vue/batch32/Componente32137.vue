<template>
  <section class="panel-32137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32137");
const base = ref(32137);
const total = computed(() => base.value * 2);

function incrementar32137() {
  base.value++;
}
</script>
