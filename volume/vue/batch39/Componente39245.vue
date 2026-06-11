<template>
  <section class="panel-39245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39245");
const base = ref(39245);
const total = computed(() => base.value * 2);

function incrementar39245() {
  base.value++;
}
</script>
