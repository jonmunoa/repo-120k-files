<template>
  <section class="panel-57409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57409");
const base = ref(57409);
const total = computed(() => base.value * 2);

function incrementar57409() {
  base.value++;
}
</script>
