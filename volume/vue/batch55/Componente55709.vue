<template>
  <section class="panel-55709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55709");
const base = ref(55709);
const total = computed(() => base.value * 2);

function incrementar55709() {
  base.value++;
}
</script>
