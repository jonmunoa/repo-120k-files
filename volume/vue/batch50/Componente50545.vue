<template>
  <section class="panel-50545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50545");
const base = ref(50545);
const total = computed(() => base.value * 2);

function incrementar50545() {
  base.value++;
}
</script>
