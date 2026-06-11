<template>
  <section class="panel-17397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17397");
const base = ref(17397);
const total = computed(() => base.value * 2);

function incrementar17397() {
  base.value++;
}
</script>
