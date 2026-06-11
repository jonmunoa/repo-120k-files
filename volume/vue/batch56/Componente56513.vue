<template>
  <section class="panel-56513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56513");
const base = ref(56513);
const total = computed(() => base.value * 2);

function incrementar56513() {
  base.value++;
}
</script>
