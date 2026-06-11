<template>
  <section class="panel-709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 709");
const base = ref(709);
const total = computed(() => base.value * 2);

function incrementar709() {
  base.value++;
}
</script>
