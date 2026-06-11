<template>
  <section class="panel-44245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44245");
const base = ref(44245);
const total = computed(() => base.value * 2);

function incrementar44245() {
  base.value++;
}
</script>
