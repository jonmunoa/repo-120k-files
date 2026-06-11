<template>
  <section class="panel-17601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17601");
const base = ref(17601);
const total = computed(() => base.value * 2);

function incrementar17601() {
  base.value++;
}
</script>
