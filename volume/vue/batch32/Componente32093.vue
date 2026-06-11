<template>
  <section class="panel-32093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32093");
const base = ref(32093);
const total = computed(() => base.value * 2);

function incrementar32093() {
  base.value++;
}
</script>
