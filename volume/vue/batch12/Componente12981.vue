<template>
  <section class="panel-12981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12981");
const base = ref(12981);
const total = computed(() => base.value * 2);

function incrementar12981() {
  base.value++;
}
</script>
