<template>
  <section class="panel-32873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32873");
const base = ref(32873);
const total = computed(() => base.value * 2);

function incrementar32873() {
  base.value++;
}
</script>
