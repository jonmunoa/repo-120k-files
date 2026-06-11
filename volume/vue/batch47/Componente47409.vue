<template>
  <section class="panel-47409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47409");
const base = ref(47409);
const total = computed(() => base.value * 2);

function incrementar47409() {
  base.value++;
}
</script>
