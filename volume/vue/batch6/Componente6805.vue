<template>
  <section class="panel-6805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6805");
const base = ref(6805);
const total = computed(() => base.value * 2);

function incrementar6805() {
  base.value++;
}
</script>
