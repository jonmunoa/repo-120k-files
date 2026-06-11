<template>
  <section class="panel-27065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27065");
const base = ref(27065);
const total = computed(() => base.value * 2);

function incrementar27065() {
  base.value++;
}
</script>
