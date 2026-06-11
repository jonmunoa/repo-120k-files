<template>
  <section class="panel-53513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53513");
const base = ref(53513);
const total = computed(() => base.value * 2);

function incrementar53513() {
  base.value++;
}
</script>
