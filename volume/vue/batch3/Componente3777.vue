<template>
  <section class="panel-3777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3777");
const base = ref(3777);
const total = computed(() => base.value * 2);

function incrementar3777() {
  base.value++;
}
</script>
