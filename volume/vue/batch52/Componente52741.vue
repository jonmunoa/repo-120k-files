<template>
  <section class="panel-52741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52741");
const base = ref(52741);
const total = computed(() => base.value * 2);

function incrementar52741() {
  base.value++;
}
</script>
