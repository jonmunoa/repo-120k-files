<template>
  <section class="panel-11657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11657");
const base = ref(11657);
const total = computed(() => base.value * 2);

function incrementar11657() {
  base.value++;
}
</script>
