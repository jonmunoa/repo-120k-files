<template>
  <section class="panel-40513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40513");
const base = ref(40513);
const total = computed(() => base.value * 2);

function incrementar40513() {
  base.value++;
}
</script>
