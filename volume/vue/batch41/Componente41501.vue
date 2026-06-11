<template>
  <section class="panel-41501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41501");
const base = ref(41501);
const total = computed(() => base.value * 2);

function incrementar41501() {
  base.value++;
}
</script>
