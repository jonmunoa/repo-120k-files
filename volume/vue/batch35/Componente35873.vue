<template>
  <section class="panel-35873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35873");
const base = ref(35873);
const total = computed(() => base.value * 2);

function incrementar35873() {
  base.value++;
}
</script>
