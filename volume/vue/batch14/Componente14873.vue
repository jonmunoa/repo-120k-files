<template>
  <section class="panel-14873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14873");
const base = ref(14873);
const total = computed(() => base.value * 2);

function incrementar14873() {
  base.value++;
}
</script>
