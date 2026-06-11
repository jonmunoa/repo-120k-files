<template>
  <section class="panel-33805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33805");
const base = ref(33805);
const total = computed(() => base.value * 2);

function incrementar33805() {
  base.value++;
}
</script>
