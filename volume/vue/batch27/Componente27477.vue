<template>
  <section class="panel-27477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27477");
const base = ref(27477);
const total = computed(() => base.value * 2);

function incrementar27477() {
  base.value++;
}
</script>
