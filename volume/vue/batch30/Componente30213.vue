<template>
  <section class="panel-30213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30213");
const base = ref(30213);
const total = computed(() => base.value * 2);

function incrementar30213() {
  base.value++;
}
</script>
