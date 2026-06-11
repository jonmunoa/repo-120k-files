<template>
  <section class="panel-57573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57573");
const base = ref(57573);
const total = computed(() => base.value * 2);

function incrementar57573() {
  base.value++;
}
</script>
