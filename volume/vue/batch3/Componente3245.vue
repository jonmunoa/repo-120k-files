<template>
  <section class="panel-3245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3245");
const base = ref(3245);
const total = computed(() => base.value * 2);

function incrementar3245() {
  base.value++;
}
</script>
