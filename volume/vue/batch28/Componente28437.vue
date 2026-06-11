<template>
  <section class="panel-28437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28437");
const base = ref(28437);
const total = computed(() => base.value * 2);

function incrementar28437() {
  base.value++;
}
</script>
