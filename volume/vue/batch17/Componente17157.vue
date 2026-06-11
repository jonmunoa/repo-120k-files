<template>
  <section class="panel-17157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17157");
const base = ref(17157);
const total = computed(() => base.value * 2);

function incrementar17157() {
  base.value++;
}
</script>
