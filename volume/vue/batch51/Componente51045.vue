<template>
  <section class="panel-51045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51045");
const base = ref(51045);
const total = computed(() => base.value * 2);

function incrementar51045() {
  base.value++;
}
</script>
