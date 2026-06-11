<template>
  <section class="panel-20873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20873");
const base = ref(20873);
const total = computed(() => base.value * 2);

function incrementar20873() {
  base.value++;
}
</script>
