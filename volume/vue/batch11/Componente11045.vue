<template>
  <section class="panel-11045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11045");
const base = ref(11045);
const total = computed(() => base.value * 2);

function incrementar11045() {
  base.value++;
}
</script>
