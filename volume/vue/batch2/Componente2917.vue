<template>
  <section class="panel-2917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2917");
const base = ref(2917);
const total = computed(() => base.value * 2);

function incrementar2917() {
  base.value++;
}
</script>
