<template>
  <section class="panel-20033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20033");
const base = ref(20033);
const total = computed(() => base.value * 2);

function incrementar20033() {
  base.value++;
}
</script>
