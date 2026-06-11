<template>
  <section class="panel-4661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4661");
const base = ref(4661);
const total = computed(() => base.value * 2);

function incrementar4661() {
  base.value++;
}
</script>
