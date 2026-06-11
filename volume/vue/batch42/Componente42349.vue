<template>
  <section class="panel-42349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42349");
const base = ref(42349);
const total = computed(() => base.value * 2);

function incrementar42349() {
  base.value++;
}
</script>
