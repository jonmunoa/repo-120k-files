<template>
  <section class="panel-28297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28297");
const base = ref(28297);
const total = computed(() => base.value * 2);

function incrementar28297() {
  base.value++;
}
</script>
