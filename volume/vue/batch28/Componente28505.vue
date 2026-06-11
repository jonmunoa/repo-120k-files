<template>
  <section class="panel-28505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28505");
const base = ref(28505);
const total = computed(() => base.value * 2);

function incrementar28505() {
  base.value++;
}
</script>
