<template>
  <section class="panel-50413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50413");
const base = ref(50413);
const total = computed(() => base.value * 2);

function incrementar50413() {
  base.value++;
}
</script>
