<template>
  <section class="panel-37873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37873");
const base = ref(37873);
const total = computed(() => base.value * 2);

function incrementar37873() {
  base.value++;
}
</script>
