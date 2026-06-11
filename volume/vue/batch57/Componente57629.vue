<template>
  <section class="panel-57629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57629");
const base = ref(57629);
const total = computed(() => base.value * 2);

function incrementar57629() {
  base.value++;
}
</script>
