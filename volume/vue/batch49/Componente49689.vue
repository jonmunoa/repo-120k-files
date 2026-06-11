<template>
  <section class="panel-49689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49689");
const base = ref(49689);
const total = computed(() => base.value * 2);

function incrementar49689() {
  base.value++;
}
</script>
