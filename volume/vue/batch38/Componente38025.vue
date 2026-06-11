<template>
  <section class="panel-38025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38025");
const base = ref(38025);
const total = computed(() => base.value * 2);

function incrementar38025() {
  base.value++;
}
</script>
