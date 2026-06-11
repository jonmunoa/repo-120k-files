<template>
  <section class="panel-23985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23985");
const base = ref(23985);
const total = computed(() => base.value * 2);

function incrementar23985() {
  base.value++;
}
</script>
