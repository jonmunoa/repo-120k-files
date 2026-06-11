<template>
  <section class="panel-47601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47601");
const base = ref(47601);
const total = computed(() => base.value * 2);

function incrementar47601() {
  base.value++;
}
</script>
