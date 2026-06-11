<template>
  <section class="panel-3477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3477");
const base = ref(3477);
const total = computed(() => base.value * 2);

function incrementar3477() {
  base.value++;
}
</script>
