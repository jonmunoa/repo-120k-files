<template>
  <section class="panel-32277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32277");
const base = ref(32277);
const total = computed(() => base.value * 2);

function incrementar32277() {
  base.value++;
}
</script>
