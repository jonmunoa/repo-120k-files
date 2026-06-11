<template>
  <section class="panel-18553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18553");
const base = ref(18553);
const total = computed(() => base.value * 2);

function incrementar18553() {
  base.value++;
}
</script>
