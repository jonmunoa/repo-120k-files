<template>
  <section class="panel-44981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44981");
const base = ref(44981);
const total = computed(() => base.value * 2);

function incrementar44981() {
  base.value++;
}
</script>
