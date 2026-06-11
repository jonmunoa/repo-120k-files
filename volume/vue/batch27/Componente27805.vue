<template>
  <section class="panel-27805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27805");
const base = ref(27805);
const total = computed(() => base.value * 2);

function incrementar27805() {
  base.value++;
}
</script>
