<template>
  <section class="panel-22409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22409");
const base = ref(22409);
const total = computed(() => base.value * 2);

function incrementar22409() {
  base.value++;
}
</script>
