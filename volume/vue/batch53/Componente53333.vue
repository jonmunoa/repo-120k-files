<template>
  <section class="panel-53333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53333");
const base = ref(53333);
const total = computed(() => base.value * 2);

function incrementar53333() {
  base.value++;
}
</script>
