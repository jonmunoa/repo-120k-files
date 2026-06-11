<template>
  <section class="panel-57885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57885");
const base = ref(57885);
const total = computed(() => base.value * 2);

function incrementar57885() {
  base.value++;
}
</script>
