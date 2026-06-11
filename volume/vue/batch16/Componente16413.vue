<template>
  <section class="panel-16413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16413");
const base = ref(16413);
const total = computed(() => base.value * 2);

function incrementar16413() {
  base.value++;
}
</script>
