<template>
  <section class="panel-22413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22413");
const base = ref(22413);
const total = computed(() => base.value * 2);

function incrementar22413() {
  base.value++;
}
</script>
