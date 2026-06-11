<template>
  <section class="panel-17209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17209");
const base = ref(17209);
const total = computed(() => base.value * 2);

function incrementar17209() {
  base.value++;
}
</script>
