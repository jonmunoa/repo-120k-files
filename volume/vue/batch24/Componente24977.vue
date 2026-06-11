<template>
  <section class="panel-24977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24977");
const base = ref(24977);
const total = computed(() => base.value * 2);

function incrementar24977() {
  base.value++;
}
</script>
