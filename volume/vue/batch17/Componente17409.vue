<template>
  <section class="panel-17409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17409");
const base = ref(17409);
const total = computed(() => base.value * 2);

function incrementar17409() {
  base.value++;
}
</script>
