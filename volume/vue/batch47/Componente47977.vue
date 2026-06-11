<template>
  <section class="panel-47977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47977");
const base = ref(47977);
const total = computed(() => base.value * 2);

function incrementar47977() {
  base.value++;
}
</script>
