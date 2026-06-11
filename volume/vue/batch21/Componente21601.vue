<template>
  <section class="panel-21601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21601");
const base = ref(21601);
const total = computed(() => base.value * 2);

function incrementar21601() {
  base.value++;
}
</script>
