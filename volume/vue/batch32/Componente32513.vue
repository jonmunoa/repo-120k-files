<template>
  <section class="panel-32513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32513");
const base = ref(32513);
const total = computed(() => base.value * 2);

function incrementar32513() {
  base.value++;
}
</script>
