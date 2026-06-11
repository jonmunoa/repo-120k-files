<template>
  <section class="panel-21657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21657");
const base = ref(21657);
const total = computed(() => base.value * 2);

function incrementar21657() {
  base.value++;
}
</script>
