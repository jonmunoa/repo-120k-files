<template>
  <section class="panel-57305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57305");
const base = ref(57305);
const total = computed(() => base.value * 2);

function incrementar57305() {
  base.value++;
}
</script>
