<template>
  <section class="panel-34217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34217");
const base = ref(34217);
const total = computed(() => base.value * 2);

function incrementar34217() {
  base.value++;
}
</script>
