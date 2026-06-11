<template>
  <section class="panel-37409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37409");
const base = ref(37409);
const total = computed(() => base.value * 2);

function incrementar37409() {
  base.value++;
}
</script>
