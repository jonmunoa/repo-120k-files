<template>
  <section class="panel-13413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13413");
const base = ref(13413);
const total = computed(() => base.value * 2);

function incrementar13413() {
  base.value++;
}
</script>
