<template>
  <section class="panel-56409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56409");
const base = ref(56409);
const total = computed(() => base.value * 2);

function incrementar56409() {
  base.value++;
}
</script>
