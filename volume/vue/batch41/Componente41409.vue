<template>
  <section class="panel-41409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41409");
const base = ref(41409);
const total = computed(() => base.value * 2);

function incrementar41409() {
  base.value++;
}
</script>
