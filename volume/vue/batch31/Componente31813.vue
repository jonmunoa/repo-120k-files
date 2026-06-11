<template>
  <section class="panel-31813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31813");
const base = ref(31813);
const total = computed(() => base.value * 2);

function incrementar31813() {
  base.value++;
}
</script>
