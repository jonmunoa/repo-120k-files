<template>
  <section class="panel-45777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45777");
const base = ref(45777);
const total = computed(() => base.value * 2);

function incrementar45777() {
  base.value++;
}
</script>
