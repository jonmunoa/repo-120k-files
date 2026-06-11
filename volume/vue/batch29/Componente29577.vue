<template>
  <section class="panel-29577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29577");
const base = ref(29577);
const total = computed(() => base.value * 2);

function incrementar29577() {
  base.value++;
}
</script>
