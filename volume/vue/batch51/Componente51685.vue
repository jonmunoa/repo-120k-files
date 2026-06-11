<template>
  <section class="panel-51685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51685");
const base = ref(51685);
const total = computed(() => base.value * 2);

function incrementar51685() {
  base.value++;
}
</script>
