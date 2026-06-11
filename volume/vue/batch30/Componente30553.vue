<template>
  <section class="panel-30553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30553");
const base = ref(30553);
const total = computed(() => base.value * 2);

function incrementar30553() {
  base.value++;
}
</script>
