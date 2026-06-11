<template>
  <section class="panel-7873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7873");
const base = ref(7873);
const total = computed(() => base.value * 2);

function incrementar7873() {
  base.value++;
}
</script>
