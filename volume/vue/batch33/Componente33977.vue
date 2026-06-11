<template>
  <section class="panel-33977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33977");
const base = ref(33977);
const total = computed(() => base.value * 2);

function incrementar33977() {
  base.value++;
}
</script>
