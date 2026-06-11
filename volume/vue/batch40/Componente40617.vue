<template>
  <section class="panel-40617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40617");
const base = ref(40617);
const total = computed(() => base.value * 2);

function incrementar40617() {
  base.value++;
}
</script>
