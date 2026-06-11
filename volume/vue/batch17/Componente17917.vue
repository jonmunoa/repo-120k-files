<template>
  <section class="panel-17917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17917");
const base = ref(17917);
const total = computed(() => base.value * 2);

function incrementar17917() {
  base.value++;
}
</script>
