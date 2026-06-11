<template>
  <section class="panel-28249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28249");
const base = ref(28249);
const total = computed(() => base.value * 2);

function incrementar28249() {
  base.value++;
}
</script>
