<template>
  <section class="panel-12421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12421");
const base = ref(12421);
const total = computed(() => base.value * 2);

function incrementar12421() {
  base.value++;
}
</script>
