<template>
  <section class="panel-24469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24469");
const base = ref(24469);
const total = computed(() => base.value * 2);

function incrementar24469() {
  base.value++;
}
</script>
