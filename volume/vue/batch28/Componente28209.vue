<template>
  <section class="panel-28209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28209");
const base = ref(28209);
const total = computed(() => base.value * 2);

function incrementar28209() {
  base.value++;
}
</script>
