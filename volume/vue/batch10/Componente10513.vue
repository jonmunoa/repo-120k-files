<template>
  <section class="panel-10513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10513");
const base = ref(10513);
const total = computed(() => base.value * 2);

function incrementar10513() {
  base.value++;
}
</script>
