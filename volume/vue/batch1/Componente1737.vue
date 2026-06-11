<template>
  <section class="panel-1737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1737");
const base = ref(1737);
const total = computed(() => base.value * 2);

function incrementar1737() {
  base.value++;
}
</script>
