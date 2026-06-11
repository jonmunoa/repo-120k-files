<template>
  <section class="panel-18873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18873");
const base = ref(18873);
const total = computed(() => base.value * 2);

function incrementar18873() {
  base.value++;
}
</script>
