<template>
  <section class="panel-7413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7413");
const base = ref(7413);
const total = computed(() => base.value * 2);

function incrementar7413() {
  base.value++;
}
</script>
