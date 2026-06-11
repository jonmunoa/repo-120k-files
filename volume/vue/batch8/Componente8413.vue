<template>
  <section class="panel-8413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8413");
const base = ref(8413);
const total = computed(() => base.value * 2);

function incrementar8413() {
  base.value++;
}
</script>
