<template>
  <section class="panel-27993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27993");
const base = ref(27993);
const total = computed(() => base.value * 2);

function incrementar27993() {
  base.value++;
}
</script>
