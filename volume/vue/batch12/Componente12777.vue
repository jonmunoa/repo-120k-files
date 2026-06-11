<template>
  <section class="panel-12777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12777");
const base = ref(12777);
const total = computed(() => base.value * 2);

function incrementar12777() {
  base.value++;
}
</script>
