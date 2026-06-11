<template>
  <section class="panel-5605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5605");
const base = ref(5605);
const total = computed(() => base.value * 2);

function incrementar5605() {
  base.value++;
}
</script>
