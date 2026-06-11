<template>
  <section class="panel-29645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29645");
const base = ref(29645);
const total = computed(() => base.value * 2);

function incrementar29645() {
  base.value++;
}
</script>
