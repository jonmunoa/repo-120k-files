<template>
  <section class="panel-55485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55485");
const base = ref(55485);
const total = computed(() => base.value * 2);

function incrementar55485() {
  base.value++;
}
</script>
