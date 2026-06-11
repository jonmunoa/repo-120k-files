<template>
  <section class="panel-40837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40837");
const base = ref(40837);
const total = computed(() => base.value * 2);

function incrementar40837() {
  base.value++;
}
</script>
