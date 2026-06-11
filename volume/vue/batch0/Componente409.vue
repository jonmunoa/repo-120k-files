<template>
  <section class="panel-409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 409");
const base = ref(409);
const total = computed(() => base.value * 2);

function incrementar409() {
  base.value++;
}
</script>
