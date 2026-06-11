<template>
  <section class="panel-19713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19713");
const base = ref(19713);
const total = computed(() => base.value * 2);

function incrementar19713() {
  base.value++;
}
</script>
