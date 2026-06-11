<template>
  <section class="panel-37097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37097");
const base = ref(37097);
const total = computed(() => base.value * 2);

function incrementar37097() {
  base.value++;
}
</script>
