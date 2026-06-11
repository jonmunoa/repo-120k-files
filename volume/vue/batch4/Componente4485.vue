<template>
  <section class="panel-4485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4485");
const base = ref(4485);
const total = computed(() => base.value * 2);

function incrementar4485() {
  base.value++;
}
</script>
