<template>
  <section class="panel-44409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44409");
const base = ref(44409);
const total = computed(() => base.value * 2);

function incrementar44409() {
  base.value++;
}
</script>
