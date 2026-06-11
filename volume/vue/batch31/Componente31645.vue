<template>
  <section class="panel-31645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31645");
const base = ref(31645);
const total = computed(() => base.value * 2);

function incrementar31645() {
  base.value++;
}
</script>
