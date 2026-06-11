<template>
  <section class="panel-57301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57301");
const base = ref(57301);
const total = computed(() => base.value * 2);

function incrementar57301() {
  base.value++;
}
</script>
