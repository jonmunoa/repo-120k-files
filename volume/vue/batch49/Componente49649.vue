<template>
  <section class="panel-49649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49649");
const base = ref(49649);
const total = computed(() => base.value * 2);

function incrementar49649() {
  base.value++;
}
</script>
