<template>
  <section class="panel-44093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44093");
const base = ref(44093);
const total = computed(() => base.value * 2);

function incrementar44093() {
  base.value++;
}
</script>
