<template>
  <section class="panel-41977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41977");
const base = ref(41977);
const total = computed(() => base.value * 2);

function incrementar41977() {
  base.value++;
}
</script>
