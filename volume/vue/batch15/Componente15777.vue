<template>
  <section class="panel-15777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15777");
const base = ref(15777);
const total = computed(() => base.value * 2);

function incrementar15777() {
  base.value++;
}
</script>
