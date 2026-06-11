<template>
  <section class="panel-51397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51397");
const base = ref(51397);
const total = computed(() => base.value * 2);

function incrementar51397() {
  base.value++;
}
</script>
