<template>
  <section class="panel-11741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11741");
const base = ref(11741);
const total = computed(() => base.value * 2);

function incrementar11741() {
  base.value++;
}
</script>
