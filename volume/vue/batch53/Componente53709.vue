<template>
  <section class="panel-53709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53709");
const base = ref(53709);
const total = computed(() => base.value * 2);

function incrementar53709() {
  base.value++;
}
</script>
