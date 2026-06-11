<template>
  <section class="panel-29777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29777");
const base = ref(29777);
const total = computed(() => base.value * 2);

function incrementar29777() {
  base.value++;
}
</script>
