<template>
  <section class="panel-33513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33513");
const base = ref(33513);
const total = computed(() => base.value * 2);

function incrementar33513() {
  base.value++;
}
</script>
