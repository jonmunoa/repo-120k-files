<template>
  <section class="panel-9445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9445");
const base = ref(9445);
const total = computed(() => base.value * 2);

function incrementar9445() {
  base.value++;
}
</script>
