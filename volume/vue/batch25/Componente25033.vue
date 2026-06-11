<template>
  <section class="panel-25033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25033");
const base = ref(25033);
const total = computed(() => base.value * 2);

function incrementar25033() {
  base.value++;
}
</script>
