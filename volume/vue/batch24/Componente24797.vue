<template>
  <section class="panel-24797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24797");
const base = ref(24797);
const total = computed(() => base.value * 2);

function incrementar24797() {
  base.value++;
}
</script>
