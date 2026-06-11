<template>
  <section class="panel-50789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50789");
const base = ref(50789);
const total = computed(() => base.value * 2);

function incrementar50789() {
  base.value++;
}
</script>
