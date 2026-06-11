<template>
  <section class="panel-47389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47389");
const base = ref(47389);
const total = computed(() => base.value * 2);

function incrementar47389() {
  base.value++;
}
</script>
