<template>
  <section class="panel-51149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51149");
const base = ref(51149);
const total = computed(() => base.value * 2);

function incrementar51149() {
  base.value++;
}
</script>
