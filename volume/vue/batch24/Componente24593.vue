<template>
  <section class="panel-24593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24593");
const base = ref(24593);
const total = computed(() => base.value * 2);

function incrementar24593() {
  base.value++;
}
</script>
