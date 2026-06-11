<template>
  <section class="panel-24093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24093");
const base = ref(24093);
const total = computed(() => base.value * 2);

function incrementar24093() {
  base.value++;
}
</script>
