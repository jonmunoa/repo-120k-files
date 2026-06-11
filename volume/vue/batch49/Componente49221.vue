<template>
  <section class="panel-49221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49221");
const base = ref(49221);
const total = computed(() => base.value * 2);

function incrementar49221() {
  base.value++;
}
</script>
