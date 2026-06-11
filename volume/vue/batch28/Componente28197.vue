<template>
  <section class="panel-28197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28197");
const base = ref(28197);
const total = computed(() => base.value * 2);

function incrementar28197() {
  base.value++;
}
</script>
