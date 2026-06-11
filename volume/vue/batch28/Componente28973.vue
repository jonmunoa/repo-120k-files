<template>
  <section class="panel-28973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28973");
const base = ref(28973);
const total = computed(() => base.value * 2);

function incrementar28973() {
  base.value++;
}
</script>
