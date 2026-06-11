<template>
  <section class="panel-28873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28873");
const base = ref(28873);
const total = computed(() => base.value * 2);

function incrementar28873() {
  base.value++;
}
</script>
