<template>
  <section class="panel-20357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20357");
const base = ref(20357);
const total = computed(() => base.value * 2);

function incrementar20357() {
  base.value++;
}
</script>
