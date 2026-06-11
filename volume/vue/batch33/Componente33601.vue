<template>
  <section class="panel-33601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33601");
const base = ref(33601);
const total = computed(() => base.value * 2);

function incrementar33601() {
  base.value++;
}
</script>
