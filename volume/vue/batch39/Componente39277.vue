<template>
  <section class="panel-39277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39277");
const base = ref(39277);
const total = computed(() => base.value * 2);

function incrementar39277() {
  base.value++;
}
</script>
