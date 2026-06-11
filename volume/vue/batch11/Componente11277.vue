<template>
  <section class="panel-11277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11277");
const base = ref(11277);
const total = computed(() => base.value * 2);

function incrementar11277() {
  base.value++;
}
</script>
