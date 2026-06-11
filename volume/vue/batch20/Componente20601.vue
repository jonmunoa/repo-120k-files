<template>
  <section class="panel-20601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20601");
const base = ref(20601);
const total = computed(() => base.value * 2);

function incrementar20601() {
  base.value++;
}
</script>
