<template>
  <section class="panel-17025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17025");
const base = ref(17025);
const total = computed(() => base.value * 2);

function incrementar17025() {
  base.value++;
}
</script>
