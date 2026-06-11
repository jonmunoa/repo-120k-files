<template>
  <section class="panel-57481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57481");
const base = ref(57481);
const total = computed(() => base.value * 2);

function incrementar57481() {
  base.value++;
}
</script>
