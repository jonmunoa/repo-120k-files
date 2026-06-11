<template>
  <section class="panel-11977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11977");
const base = ref(11977);
const total = computed(() => base.value * 2);

function incrementar11977() {
  base.value++;
}
</script>
