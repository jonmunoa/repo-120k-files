<template>
  <section class="panel-40585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40585");
const base = ref(40585);
const total = computed(() => base.value * 2);

function incrementar40585() {
  base.value++;
}
</script>
