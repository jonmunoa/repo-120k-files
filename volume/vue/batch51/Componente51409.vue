<template>
  <section class="panel-51409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51409");
const base = ref(51409);
const total = computed(() => base.value * 2);

function incrementar51409() {
  base.value++;
}
</script>
