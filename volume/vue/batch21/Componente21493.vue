<template>
  <section class="panel-21493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21493");
const base = ref(21493);
const total = computed(() => base.value * 2);

function incrementar21493() {
  base.value++;
}
</script>
