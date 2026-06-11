<template>
  <section class="panel-39777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39777");
const base = ref(39777);
const total = computed(() => base.value * 2);

function incrementar39777() {
  base.value++;
}
</script>
