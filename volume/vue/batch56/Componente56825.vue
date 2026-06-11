<template>
  <section class="panel-56825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56825");
const base = ref(56825);
const total = computed(() => base.value * 2);

function incrementar56825() {
  base.value++;
}
</script>
