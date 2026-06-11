<template>
  <section class="panel-41637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41637");
const base = ref(41637);
const total = computed(() => base.value * 2);

function incrementar41637() {
  base.value++;
}
</script>
