<template>
  <section class="panel-24409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24409");
const base = ref(24409);
const total = computed(() => base.value * 2);

function incrementar24409() {
  base.value++;
}
</script>
