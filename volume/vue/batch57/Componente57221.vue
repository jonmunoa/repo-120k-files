<template>
  <section class="panel-57221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57221");
const base = ref(57221);
const total = computed(() => base.value * 2);

function incrementar57221() {
  base.value++;
}
</script>
