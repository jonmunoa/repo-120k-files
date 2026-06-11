<template>
  <section class="panel-14709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14709");
const base = ref(14709);
const total = computed(() => base.value * 2);

function incrementar14709() {
  base.value++;
}
</script>
