<template>
  <section class="panel-40437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40437");
const base = ref(40437);
const total = computed(() => base.value * 2);

function incrementar40437() {
  base.value++;
}
</script>
