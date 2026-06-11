<template>
  <section class="panel-44553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44553");
const base = ref(44553);
const total = computed(() => base.value * 2);

function incrementar44553() {
  base.value++;
}
</script>
