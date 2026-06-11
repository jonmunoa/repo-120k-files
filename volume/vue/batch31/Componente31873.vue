<template>
  <section class="panel-31873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31873");
const base = ref(31873);
const total = computed(() => base.value * 2);

function incrementar31873() {
  base.value++;
}
</script>
