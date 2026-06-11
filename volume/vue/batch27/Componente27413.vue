<template>
  <section class="panel-27413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27413");
const base = ref(27413);
const total = computed(() => base.value * 2);

function incrementar27413() {
  base.value++;
}
</script>
