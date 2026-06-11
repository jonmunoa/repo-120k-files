<template>
  <section class="panel-77">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 77");
const base = ref(77);
const total = computed(() => base.value * 2);

function incrementar77() {
  base.value++;
}
</script>
