<template>
  <section class="panel-57317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57317");
const base = ref(57317);
const total = computed(() => base.value * 2);

function incrementar57317() {
  base.value++;
}
</script>
