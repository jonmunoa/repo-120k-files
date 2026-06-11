<template>
  <section class="panel-40601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40601");
const base = ref(40601);
const total = computed(() => base.value * 2);

function incrementar40601() {
  base.value++;
}
</script>
