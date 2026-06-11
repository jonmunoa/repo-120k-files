<template>
  <section class="panel-8773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8773");
const base = ref(8773);
const total = computed(() => base.value * 2);

function incrementar8773() {
  base.value++;
}
</script>
