<template>
  <section class="panel-25573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25573");
const base = ref(25573);
const total = computed(() => base.value * 2);

function incrementar25573() {
  base.value++;
}
</script>
