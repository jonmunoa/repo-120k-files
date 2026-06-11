<template>
  <section class="panel-20073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20073");
const base = ref(20073);
const total = computed(() => base.value * 2);

function incrementar20073() {
  base.value++;
}
</script>
