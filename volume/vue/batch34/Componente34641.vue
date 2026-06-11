<template>
  <section class="panel-34641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34641");
const base = ref(34641);
const total = computed(() => base.value * 2);

function incrementar34641() {
  base.value++;
}
</script>
