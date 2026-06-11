<template>
  <section class="panel-54981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54981");
const base = ref(54981);
const total = computed(() => base.value * 2);

function incrementar54981() {
  base.value++;
}
</script>
