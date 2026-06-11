<template>
  <section class="panel-14513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14513");
const base = ref(14513);
const total = computed(() => base.value * 2);

function incrementar14513() {
  base.value++;
}
</script>
