<template>
  <section class="panel-42409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42409");
const base = ref(42409);
const total = computed(() => base.value * 2);

function incrementar42409() {
  base.value++;
}
</script>
