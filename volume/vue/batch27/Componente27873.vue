<template>
  <section class="panel-27873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27873");
const base = ref(27873);
const total = computed(() => base.value * 2);

function incrementar27873() {
  base.value++;
}
</script>
