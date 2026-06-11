<template>
  <section class="panel-14209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14209");
const base = ref(14209);
const total = computed(() => base.value * 2);

function incrementar14209() {
  base.value++;
}
</script>
