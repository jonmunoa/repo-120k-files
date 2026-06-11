<template>
  <section class="panel-20901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20901");
const base = ref(20901);
const total = computed(() => base.value * 2);

function incrementar20901() {
  base.value++;
}
</script>
