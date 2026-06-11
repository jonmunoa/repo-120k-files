<template>
  <section class="panel-9577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9577");
const base = ref(9577);
const total = computed(() => base.value * 2);

function incrementar9577() {
  base.value++;
}
</script>
