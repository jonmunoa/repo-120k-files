<template>
  <section class="panel-17425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17425");
const base = ref(17425);
const total = computed(() => base.value * 2);

function incrementar17425() {
  base.value++;
}
</script>
