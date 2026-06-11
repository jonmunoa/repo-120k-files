<template>
  <section class="panel-28753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28753");
const base = ref(28753);
const total = computed(() => base.value * 2);

function incrementar28753() {
  base.value++;
}
</script>
