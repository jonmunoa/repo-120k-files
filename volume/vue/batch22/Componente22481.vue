<template>
  <section class="panel-22481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22481");
const base = ref(22481);
const total = computed(() => base.value * 2);

function incrementar22481() {
  base.value++;
}
</script>
