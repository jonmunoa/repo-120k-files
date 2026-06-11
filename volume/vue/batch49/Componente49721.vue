<template>
  <section class="panel-49721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49721");
const base = ref(49721);
const total = computed(() => base.value * 2);

function incrementar49721() {
  base.value++;
}
</script>
