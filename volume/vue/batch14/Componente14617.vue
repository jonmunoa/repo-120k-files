<template>
  <section class="panel-14617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14617");
const base = ref(14617);
const total = computed(() => base.value * 2);

function incrementar14617() {
  base.value++;
}
</script>
