<template>
  <section class="panel-19477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19477");
const base = ref(19477);
const total = computed(() => base.value * 2);

function incrementar19477() {
  base.value++;
}
</script>
