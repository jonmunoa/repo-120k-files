<template>
  <section class="panel-57957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57957");
const base = ref(57957);
const total = computed(() => base.value * 2);

function incrementar57957() {
  base.value++;
}
</script>
