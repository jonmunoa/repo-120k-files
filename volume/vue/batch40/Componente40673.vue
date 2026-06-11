<template>
  <section class="panel-40673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40673");
const base = ref(40673);
const total = computed(() => base.value * 2);

function incrementar40673() {
  base.value++;
}
</script>
