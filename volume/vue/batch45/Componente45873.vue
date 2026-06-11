<template>
  <section class="panel-45873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45873");
const base = ref(45873);
const total = computed(() => base.value * 2);

function incrementar45873() {
  base.value++;
}
</script>
