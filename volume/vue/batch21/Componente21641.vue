<template>
  <section class="panel-21641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21641");
const base = ref(21641);
const total = computed(() => base.value * 2);

function incrementar21641() {
  base.value++;
}
</script>
