<template>
  <section class="panel-57821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57821");
const base = ref(57821);
const total = computed(() => base.value * 2);

function incrementar57821() {
  base.value++;
}
</script>
