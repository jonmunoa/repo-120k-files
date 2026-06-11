<template>
  <section class="panel-57901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57901");
const base = ref(57901);
const total = computed(() => base.value * 2);

function incrementar57901() {
  base.value++;
}
</script>
