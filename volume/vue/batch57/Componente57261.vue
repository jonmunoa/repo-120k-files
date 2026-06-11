<template>
  <section class="panel-57261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57261");
const base = ref(57261);
const total = computed(() => base.value * 2);

function incrementar57261() {
  base.value++;
}
</script>
