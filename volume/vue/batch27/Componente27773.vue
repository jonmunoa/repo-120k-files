<template>
  <section class="panel-27773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27773");
const base = ref(27773);
const total = computed(() => base.value * 2);

function incrementar27773() {
  base.value++;
}
</script>
