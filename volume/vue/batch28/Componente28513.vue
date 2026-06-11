<template>
  <section class="panel-28513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28513");
const base = ref(28513);
const total = computed(() => base.value * 2);

function incrementar28513() {
  base.value++;
}
</script>
