<template>
  <section class="panel-33409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33409");
const base = ref(33409);
const total = computed(() => base.value * 2);

function incrementar33409() {
  base.value++;
}
</script>
