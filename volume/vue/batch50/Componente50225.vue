<template>
  <section class="panel-50225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50225");
const base = ref(50225);
const total = computed(() => base.value * 2);

function incrementar50225() {
  base.value++;
}
</script>
