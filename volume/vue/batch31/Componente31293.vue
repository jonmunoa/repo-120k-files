<template>
  <section class="panel-31293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31293");
const base = ref(31293);
const total = computed(() => base.value * 2);

function incrementar31293() {
  base.value++;
}
</script>
