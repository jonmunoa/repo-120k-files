<template>
  <section class="panel-18357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18357");
const base = ref(18357);
const total = computed(() => base.value * 2);

function incrementar18357() {
  base.value++;
}
</script>
