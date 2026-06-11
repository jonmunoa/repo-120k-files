<template>
  <section class="panel-15873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15873");
const base = ref(15873);
const total = computed(() => base.value * 2);

function incrementar15873() {
  base.value++;
}
</script>
