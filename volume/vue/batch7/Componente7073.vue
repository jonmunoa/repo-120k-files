<template>
  <section class="panel-7073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7073");
const base = ref(7073);
const total = computed(() => base.value * 2);

function incrementar7073() {
  base.value++;
}
</script>
