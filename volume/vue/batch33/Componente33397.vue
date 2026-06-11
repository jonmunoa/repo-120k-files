<template>
  <section class="panel-33397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33397");
const base = ref(33397);
const total = computed(() => base.value * 2);

function incrementar33397() {
  base.value++;
}
</script>
