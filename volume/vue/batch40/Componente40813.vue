<template>
  <section class="panel-40813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40813");
const base = ref(40813);
const total = computed(() => base.value * 2);

function incrementar40813() {
  base.value++;
}
</script>
