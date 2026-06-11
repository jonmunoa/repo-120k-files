<template>
  <section class="panel-57881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57881");
const base = ref(57881);
const total = computed(() => base.value * 2);

function incrementar57881() {
  base.value++;
}
</script>
