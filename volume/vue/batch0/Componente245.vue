<template>
  <section class="panel-245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 245");
const base = ref(245);
const total = computed(() => base.value * 2);

function incrementar245() {
  base.value++;
}
</script>
