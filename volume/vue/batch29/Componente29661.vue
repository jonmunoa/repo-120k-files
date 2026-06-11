<template>
  <section class="panel-29661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29661");
const base = ref(29661);
const total = computed(() => base.value * 2);

function incrementar29661() {
  base.value++;
}
</script>
