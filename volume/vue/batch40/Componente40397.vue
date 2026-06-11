<template>
  <section class="panel-40397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40397");
const base = ref(40397);
const total = computed(() => base.value * 2);

function incrementar40397() {
  base.value++;
}
</script>
