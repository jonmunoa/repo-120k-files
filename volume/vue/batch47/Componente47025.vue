<template>
  <section class="panel-47025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47025");
const base = ref(47025);
const total = computed(() => base.value * 2);

function incrementar47025() {
  base.value++;
}
</script>
