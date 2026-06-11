<template>
  <section class="panel-49033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49033");
const base = ref(49033);
const total = computed(() => base.value * 2);

function incrementar49033() {
  base.value++;
}
</script>
