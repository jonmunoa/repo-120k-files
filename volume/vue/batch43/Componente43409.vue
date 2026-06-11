<template>
  <section class="panel-43409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43409");
const base = ref(43409);
const total = computed(() => base.value * 2);

function incrementar43409() {
  base.value++;
}
</script>
