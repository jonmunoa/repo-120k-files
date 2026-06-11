<template>
  <section class="panel-15245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15245");
const base = ref(15245);
const total = computed(() => base.value * 2);

function incrementar15245() {
  base.value++;
}
</script>
