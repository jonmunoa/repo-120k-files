<template>
  <section class="panel-31513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31513");
const base = ref(31513);
const total = computed(() => base.value * 2);

function incrementar31513() {
  base.value++;
}
</script>
