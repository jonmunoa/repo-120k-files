<template>
  <section class="panel-2037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2037");
const base = ref(2037);
const total = computed(() => base.value * 2);

function incrementar2037() {
  base.value++;
}
</script>
