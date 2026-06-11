<template>
  <section class="panel-39225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39225");
const base = ref(39225);
const total = computed(() => base.value * 2);

function incrementar39225() {
  base.value++;
}
</script>
