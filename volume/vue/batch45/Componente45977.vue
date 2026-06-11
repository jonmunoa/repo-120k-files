<template>
  <section class="panel-45977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45977");
const base = ref(45977);
const total = computed(() => base.value * 2);

function incrementar45977() {
  base.value++;
}
</script>
