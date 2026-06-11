<template>
  <section class="panel-2137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2137");
const base = ref(2137);
const total = computed(() => base.value * 2);

function incrementar2137() {
  base.value++;
}
</script>
