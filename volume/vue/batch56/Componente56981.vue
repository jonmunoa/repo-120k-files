<template>
  <section class="panel-56981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56981");
const base = ref(56981);
const total = computed(() => base.value * 2);

function incrementar56981() {
  base.value++;
}
</script>
