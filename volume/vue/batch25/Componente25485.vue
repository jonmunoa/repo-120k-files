<template>
  <section class="panel-25485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25485");
const base = ref(25485);
const total = computed(() => base.value * 2);

function incrementar25485() {
  base.value++;
}
</script>
