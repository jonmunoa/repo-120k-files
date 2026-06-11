<template>
  <section class="panel-28177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28177");
const base = ref(28177);
const total = computed(() => base.value * 2);

function incrementar28177() {
  base.value++;
}
</script>
