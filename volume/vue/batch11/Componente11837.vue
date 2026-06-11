<template>
  <section class="panel-11837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11837");
const base = ref(11837);
const total = computed(() => base.value * 2);

function incrementar11837() {
  base.value++;
}
</script>
