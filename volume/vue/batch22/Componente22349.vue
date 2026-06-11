<template>
  <section class="panel-22349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22349");
const base = ref(22349);
const total = computed(() => base.value * 2);

function incrementar22349() {
  base.value++;
}
</script>
