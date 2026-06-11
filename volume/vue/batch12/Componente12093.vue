<template>
  <section class="panel-12093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12093");
const base = ref(12093);
const total = computed(() => base.value * 2);

function incrementar12093() {
  base.value++;
}
</script>
