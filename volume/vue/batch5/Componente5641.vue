<template>
  <section class="panel-5641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5641");
const base = ref(5641);
const total = computed(() => base.value * 2);

function incrementar5641() {
  base.value++;
}
</script>
