<template>
  <section class="panel-9709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9709");
const base = ref(9709);
const total = computed(() => base.value * 2);

function incrementar9709() {
  base.value++;
}
</script>
