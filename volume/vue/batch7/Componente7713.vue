<template>
  <section class="panel-7713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7713");
const base = ref(7713);
const total = computed(() => base.value * 2);

function incrementar7713() {
  base.value++;
}
</script>
