<template>
  <section class="panel-45397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45397");
const base = ref(45397);
const total = computed(() => base.value * 2);

function incrementar45397() {
  base.value++;
}
</script>
