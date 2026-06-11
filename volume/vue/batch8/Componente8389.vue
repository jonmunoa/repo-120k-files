<template>
  <section class="panel-8389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8389");
const base = ref(8389);
const total = computed(() => base.value * 2);

function incrementar8389() {
  base.value++;
}
</script>
