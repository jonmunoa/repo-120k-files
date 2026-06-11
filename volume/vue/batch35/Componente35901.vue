<template>
  <section class="panel-35901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35901");
const base = ref(35901);
const total = computed(() => base.value * 2);

function incrementar35901() {
  base.value++;
}
</script>
