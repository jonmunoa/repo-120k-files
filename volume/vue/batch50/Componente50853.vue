<template>
  <section class="panel-50853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50853");
const base = ref(50853);
const total = computed(() => base.value * 2);

function incrementar50853() {
  base.value++;
}
</script>
