<template>
  <section class="panel-15145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15145");
const base = ref(15145);
const total = computed(() => base.value * 2);

function incrementar15145() {
  base.value++;
}
</script>
