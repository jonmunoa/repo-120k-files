<template>
  <section class="panel-33969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33969");
const base = ref(33969);
const total = computed(() => base.value * 2);

function incrementar33969() {
  base.value++;
}
</script>
