<template>
  <section class="panel-44777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44777");
const base = ref(44777);
const total = computed(() => base.value * 2);

function incrementar44777() {
  base.value++;
}
</script>
