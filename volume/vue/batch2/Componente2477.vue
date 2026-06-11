<template>
  <section class="panel-2477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2477");
const base = ref(2477);
const total = computed(() => base.value * 2);

function incrementar2477() {
  base.value++;
}
</script>
