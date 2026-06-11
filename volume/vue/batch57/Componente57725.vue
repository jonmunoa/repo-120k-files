<template>
  <section class="panel-57725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57725");
const base = ref(57725);
const total = computed(() => base.value * 2);

function incrementar57725() {
  base.value++;
}
</script>
