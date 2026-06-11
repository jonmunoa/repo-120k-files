<template>
  <section class="panel-27245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27245");
const base = ref(27245);
const total = computed(() => base.value * 2);

function incrementar27245() {
  base.value++;
}
</script>
