<template>
  <section class="panel-31409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31409");
const base = ref(31409);
const total = computed(() => base.value * 2);

function incrementar31409() {
  base.value++;
}
</script>
