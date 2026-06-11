<template>
  <section class="panel-32577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32577");
const base = ref(32577);
const total = computed(() => base.value * 2);

function incrementar32577() {
  base.value++;
}
</script>
