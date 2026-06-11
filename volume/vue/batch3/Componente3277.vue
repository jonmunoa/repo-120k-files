<template>
  <section class="panel-3277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3277");
const base = ref(3277);
const total = computed(() => base.value * 2);

function incrementar3277() {
  base.value++;
}
</script>
