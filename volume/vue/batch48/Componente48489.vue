<template>
  <section class="panel-48489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48489");
const base = ref(48489);
const total = computed(() => base.value * 2);

function incrementar48489() {
  base.value++;
}
</script>
