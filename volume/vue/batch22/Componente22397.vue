<template>
  <section class="panel-22397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22397");
const base = ref(22397);
const total = computed(() => base.value * 2);

function incrementar22397() {
  base.value++;
}
</script>
