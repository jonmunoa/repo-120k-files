<template>
  <section class="panel-11397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11397");
const base = ref(11397);
const total = computed(() => base.value * 2);

function incrementar11397() {
  base.value++;
}
</script>
