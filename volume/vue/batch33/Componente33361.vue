<template>
  <section class="panel-33361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33361");
const base = ref(33361);
const total = computed(() => base.value * 2);

function incrementar33361() {
  base.value++;
}
</script>
