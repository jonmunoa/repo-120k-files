<template>
  <section class="panel-25977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25977");
const base = ref(25977);
const total = computed(() => base.value * 2);

function incrementar25977() {
  base.value++;
}
</script>
