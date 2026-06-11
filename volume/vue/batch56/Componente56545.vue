<template>
  <section class="panel-56545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56545");
const base = ref(56545);
const total = computed(() => base.value * 2);

function incrementar56545() {
  base.value++;
}
</script>
