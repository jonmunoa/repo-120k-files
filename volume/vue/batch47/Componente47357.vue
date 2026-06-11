<template>
  <section class="panel-47357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47357");
const base = ref(47357);
const total = computed(() => base.value * 2);

function incrementar47357() {
  base.value++;
}
</script>
