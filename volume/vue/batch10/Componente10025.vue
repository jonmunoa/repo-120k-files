<template>
  <section class="panel-10025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10025");
const base = ref(10025);
const total = computed(() => base.value * 2);

function incrementar10025() {
  base.value++;
}
</script>
