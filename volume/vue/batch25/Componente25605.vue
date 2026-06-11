<template>
  <section class="panel-25605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25605");
const base = ref(25605);
const total = computed(() => base.value * 2);

function incrementar25605() {
  base.value++;
}
</script>
