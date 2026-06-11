<template>
  <section class="panel-4977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4977");
const base = ref(4977);
const total = computed(() => base.value * 2);

function incrementar4977() {
  base.value++;
}
</script>
