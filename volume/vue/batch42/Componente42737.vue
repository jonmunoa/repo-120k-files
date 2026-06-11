<template>
  <section class="panel-42737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42737");
const base = ref(42737);
const total = computed(() => base.value * 2);

function incrementar42737() {
  base.value++;
}
</script>
