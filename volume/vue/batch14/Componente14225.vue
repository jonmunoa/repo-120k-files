<template>
  <section class="panel-14225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14225");
const base = ref(14225);
const total = computed(() => base.value * 2);

function incrementar14225() {
  base.value++;
}
</script>
