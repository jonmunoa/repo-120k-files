<template>
  <section class="panel-28317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28317");
const base = ref(28317);
const total = computed(() => base.value * 2);

function incrementar28317() {
  base.value++;
}
</script>
