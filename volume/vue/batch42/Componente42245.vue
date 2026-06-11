<template>
  <section class="panel-42245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42245");
const base = ref(42245);
const total = computed(() => base.value * 2);

function incrementar42245() {
  base.value++;
}
</script>
