<template>
  <section class="panel-38381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38381");
const base = ref(38381);
const total = computed(() => base.value * 2);

function incrementar38381() {
  base.value++;
}
</script>
