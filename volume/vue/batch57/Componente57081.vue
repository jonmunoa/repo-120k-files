<template>
  <section class="panel-57081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57081");
const base = ref(57081);
const total = computed(() => base.value * 2);

function incrementar57081() {
  base.value++;
}
</script>
