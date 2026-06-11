<template>
  <section class="panel-20525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20525");
const base = ref(20525);
const total = computed(() => base.value * 2);

function incrementar20525() {
  base.value++;
}
</script>
