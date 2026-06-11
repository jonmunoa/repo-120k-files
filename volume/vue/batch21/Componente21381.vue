<template>
  <section class="panel-21381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21381");
const base = ref(21381);
const total = computed(() => base.value * 2);

function incrementar21381() {
  base.value++;
}
</script>
