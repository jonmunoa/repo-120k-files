<template>
  <section class="panel-21617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21617");
const base = ref(21617);
const total = computed(() => base.value * 2);

function incrementar21617() {
  base.value++;
}
</script>
