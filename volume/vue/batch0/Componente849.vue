<template>
  <section class="panel-849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 849");
const base = ref(849);
const total = computed(() => base.value * 2);

function incrementar849() {
  base.value++;
}
</script>
