<template>
  <section class="panel-50701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50701");
const base = ref(50701);
const total = computed(() => base.value * 2);

function incrementar50701() {
  base.value++;
}
</script>
