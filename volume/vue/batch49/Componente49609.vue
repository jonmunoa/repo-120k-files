<template>
  <section class="panel-49609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49609");
const base = ref(49609);
const total = computed(() => base.value * 2);

function incrementar49609() {
  base.value++;
}
</script>
