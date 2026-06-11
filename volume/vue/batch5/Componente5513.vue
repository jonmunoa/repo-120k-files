<template>
  <section class="panel-5513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5513");
const base = ref(5513);
const total = computed(() => base.value * 2);

function incrementar5513() {
  base.value++;
}
</script>
