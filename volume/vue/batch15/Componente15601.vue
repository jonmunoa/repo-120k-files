<template>
  <section class="panel-15601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15601");
const base = ref(15601);
const total = computed(() => base.value * 2);

function incrementar15601() {
  base.value++;
}
</script>
