<template>
  <section class="panel-33357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33357");
const base = ref(33357);
const total = computed(() => base.value * 2);

function incrementar33357() {
  base.value++;
}
</script>
