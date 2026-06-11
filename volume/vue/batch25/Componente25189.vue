<template>
  <section class="panel-25189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25189");
const base = ref(25189);
const total = computed(() => base.value * 2);

function incrementar25189() {
  base.value++;
}
</script>
