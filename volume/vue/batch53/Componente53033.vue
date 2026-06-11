<template>
  <section class="panel-53033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53033");
const base = ref(53033);
const total = computed(() => base.value * 2);

function incrementar53033() {
  base.value++;
}
</script>
