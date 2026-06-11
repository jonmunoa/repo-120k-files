<template>
  <section class="panel-7837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7837");
const base = ref(7837);
const total = computed(() => base.value * 2);

function incrementar7837() {
  base.value++;
}
</script>
