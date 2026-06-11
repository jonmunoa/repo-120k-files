<template>
  <section class="panel-18909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18909");
const base = ref(18909);
const total = computed(() => base.value * 2);

function incrementar18909() {
  base.value++;
}
</script>
