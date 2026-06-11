<template>
  <section class="panel-41661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41661");
const base = ref(41661);
const total = computed(() => base.value * 2);

function incrementar41661() {
  base.value++;
}
</script>
