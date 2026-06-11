<template>
  <section class="panel-49881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49881");
const base = ref(49881);
const total = computed(() => base.value * 2);

function incrementar49881() {
  base.value++;
}
</script>
