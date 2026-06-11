<template>
  <section class="panel-28409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28409");
const base = ref(28409);
const total = computed(() => base.value * 2);

function incrementar28409() {
  base.value++;
}
</script>
