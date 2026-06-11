<template>
  <section class="panel-53361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53361");
const base = ref(53361);
const total = computed(() => base.value * 2);

function incrementar53361() {
  base.value++;
}
</script>
