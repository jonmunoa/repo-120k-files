<template>
  <section class="panel-24709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24709");
const base = ref(24709);
const total = computed(() => base.value * 2);

function incrementar24709() {
  base.value++;
}
</script>
