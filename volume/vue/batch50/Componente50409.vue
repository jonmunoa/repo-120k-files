<template>
  <section class="panel-50409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50409");
const base = ref(50409);
const total = computed(() => base.value * 2);

function incrementar50409() {
  base.value++;
}
</script>
