<template>
  <section class="panel-47477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47477");
const base = ref(47477);
const total = computed(() => base.value * 2);

function incrementar47477() {
  base.value++;
}
</script>
