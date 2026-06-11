<template>
  <section class="panel-14977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14977");
const base = ref(14977);
const total = computed(() => base.value * 2);

function incrementar14977() {
  base.value++;
}
</script>
