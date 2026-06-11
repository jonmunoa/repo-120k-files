<template>
  <section class="panel-25617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25617");
const base = ref(25617);
const total = computed(() => base.value * 2);

function incrementar25617() {
  base.value++;
}
</script>
