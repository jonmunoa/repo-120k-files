<template>
  <section class="panel-48501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48501");
const base = ref(48501);
const total = computed(() => base.value * 2);

function incrementar48501() {
  base.value++;
}
</script>
