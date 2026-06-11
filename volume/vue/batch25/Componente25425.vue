<template>
  <section class="panel-25425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25425");
const base = ref(25425);
const total = computed(() => base.value * 2);

function incrementar25425() {
  base.value++;
}
</script>
