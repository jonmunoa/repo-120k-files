<template>
  <section class="panel-55073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55073");
const base = ref(55073);
const total = computed(() => base.value * 2);

function incrementar55073() {
  base.value++;
}
</script>
