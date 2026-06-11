<template>
  <section class="panel-57553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57553");
const base = ref(57553);
const total = computed(() => base.value * 2);

function incrementar57553() {
  base.value++;
}
</script>
