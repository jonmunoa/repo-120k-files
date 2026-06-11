<template>
  <section class="panel-17873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17873");
const base = ref(17873);
const total = computed(() => base.value * 2);

function incrementar17873() {
  base.value++;
}
</script>
