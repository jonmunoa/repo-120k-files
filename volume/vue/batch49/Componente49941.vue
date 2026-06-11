<template>
  <section class="panel-49941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49941");
const base = ref(49941);
const total = computed(() => base.value * 2);

function incrementar49941() {
  base.value++;
}
</script>
