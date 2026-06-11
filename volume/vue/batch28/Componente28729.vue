<template>
  <section class="panel-28729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28729");
const base = ref(28729);
const total = computed(() => base.value * 2);

function incrementar28729() {
  base.value++;
}
</script>
