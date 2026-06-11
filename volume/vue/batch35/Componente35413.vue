<template>
  <section class="panel-35413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35413");
const base = ref(35413);
const total = computed(() => base.value * 2);

function incrementar35413() {
  base.value++;
}
</script>
