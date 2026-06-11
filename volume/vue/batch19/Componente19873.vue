<template>
  <section class="panel-19873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19873");
const base = ref(19873);
const total = computed(() => base.value * 2);

function incrementar19873() {
  base.value++;
}
</script>
