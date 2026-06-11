<template>
  <section class="panel-57129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57129");
const base = ref(57129);
const total = computed(() => base.value * 2);

function incrementar57129() {
  base.value++;
}
</script>
