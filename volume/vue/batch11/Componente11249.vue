<template>
  <section class="panel-11249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11249");
const base = ref(11249);
const total = computed(() => base.value * 2);

function incrementar11249() {
  base.value++;
}
</script>
