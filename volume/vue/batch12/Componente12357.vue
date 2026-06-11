<template>
  <section class="panel-12357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12357");
const base = ref(12357);
const total = computed(() => base.value * 2);

function incrementar12357() {
  base.value++;
}
</script>
