<template>
  <section class="panel-29741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29741");
const base = ref(29741);
const total = computed(() => base.value * 2);

function incrementar29741() {
  base.value++;
}
</script>
