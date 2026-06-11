<template>
  <section class="panel-8397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8397");
const base = ref(8397);
const total = computed(() => base.value * 2);

function incrementar8397() {
  base.value++;
}
</script>
