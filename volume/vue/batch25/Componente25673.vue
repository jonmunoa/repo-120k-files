<template>
  <section class="panel-25673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25673");
const base = ref(25673);
const total = computed(() => base.value * 2);

function incrementar25673() {
  base.value++;
}
</script>
