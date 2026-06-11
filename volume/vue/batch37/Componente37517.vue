<template>
  <section class="panel-37517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37517");
const base = ref(37517);
const total = computed(() => base.value * 2);

function incrementar37517() {
  base.value++;
}
</script>
