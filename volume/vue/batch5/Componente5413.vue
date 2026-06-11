<template>
  <section class="panel-5413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5413");
const base = ref(5413);
const total = computed(() => base.value * 2);

function incrementar5413() {
  base.value++;
}
</script>
