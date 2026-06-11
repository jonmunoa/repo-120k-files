<template>
  <section class="panel-6777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6777");
const base = ref(6777);
const total = computed(() => base.value * 2);

function incrementar6777() {
  base.value++;
}
</script>
