<template>
  <section class="panel-14601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14601");
const base = ref(14601);
const total = computed(() => base.value * 2);

function incrementar14601() {
  base.value++;
}
</script>
