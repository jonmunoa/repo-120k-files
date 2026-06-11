<template>
  <section class="panel-28989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28989");
const base = ref(28989);
const total = computed(() => base.value * 2);

function incrementar28989() {
  base.value++;
}
</script>
