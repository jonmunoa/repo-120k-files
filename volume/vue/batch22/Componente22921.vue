<template>
  <section class="panel-22921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22921");
const base = ref(22921);
const total = computed(() => base.value * 2);

function incrementar22921() {
  base.value++;
}
</script>
