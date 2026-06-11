<template>
  <section class="panel-40073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40073");
const base = ref(40073);
const total = computed(() => base.value * 2);

function incrementar40073() {
  base.value++;
}
</script>
