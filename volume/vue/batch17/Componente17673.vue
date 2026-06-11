<template>
  <section class="panel-17673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17673");
const base = ref(17673);
const total = computed(() => base.value * 2);

function incrementar17673() {
  base.value++;
}
</script>
