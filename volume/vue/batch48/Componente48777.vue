<template>
  <section class="panel-48777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48777");
const base = ref(48777);
const total = computed(() => base.value * 2);

function incrementar48777() {
  base.value++;
}
</script>
