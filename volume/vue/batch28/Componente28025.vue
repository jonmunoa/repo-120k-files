<template>
  <section class="panel-28025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28025");
const base = ref(28025);
const total = computed(() => base.value * 2);

function incrementar28025() {
  base.value++;
}
</script>
