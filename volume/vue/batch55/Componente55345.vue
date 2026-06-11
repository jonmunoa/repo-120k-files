<template>
  <section class="panel-55345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55345");
const base = ref(55345);
const total = computed(() => base.value * 2);

function incrementar55345() {
  base.value++;
}
</script>
