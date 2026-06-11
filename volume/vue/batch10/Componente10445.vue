<template>
  <section class="panel-10445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10445");
const base = ref(10445);
const total = computed(() => base.value * 2);

function incrementar10445() {
  base.value++;
}
</script>
