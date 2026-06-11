<template>
  <section class="panel-17773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17773");
const base = ref(17773);
const total = computed(() => base.value * 2);

function incrementar17773() {
  base.value++;
}
</script>
