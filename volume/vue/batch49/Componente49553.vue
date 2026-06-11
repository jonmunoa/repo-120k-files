<template>
  <section class="panel-49553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49553");
const base = ref(49553);
const total = computed(() => base.value * 2);

function incrementar49553() {
  base.value++;
}
</script>
