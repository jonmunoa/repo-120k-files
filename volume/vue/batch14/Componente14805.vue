<template>
  <section class="panel-14805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14805");
const base = ref(14805);
const total = computed(() => base.value * 2);

function incrementar14805() {
  base.value++;
}
</script>
