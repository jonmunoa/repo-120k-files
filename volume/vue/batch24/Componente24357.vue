<template>
  <section class="panel-24357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24357");
const base = ref(24357);
const total = computed(() => base.value * 2);

function incrementar24357() {
  base.value++;
}
</script>
