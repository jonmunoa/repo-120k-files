<template>
  <section class="panel-19969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19969");
const base = ref(19969);
const total = computed(() => base.value * 2);

function incrementar19969() {
  base.value++;
}
</script>
