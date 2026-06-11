<template>
  <section class="panel-21373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21373");
const base = ref(21373);
const total = computed(() => base.value * 2);

function incrementar21373() {
  base.value++;
}
</script>
