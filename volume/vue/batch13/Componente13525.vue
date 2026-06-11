<template>
  <section class="panel-13525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13525");
const base = ref(13525);
const total = computed(() => base.value * 2);

function incrementar13525() {
  base.value++;
}
</script>
