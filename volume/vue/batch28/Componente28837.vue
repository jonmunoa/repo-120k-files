<template>
  <section class="panel-28837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28837");
const base = ref(28837);
const total = computed(() => base.value * 2);

function incrementar28837() {
  base.value++;
}
</script>
