<template>
  <section class="panel-53225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53225");
const base = ref(53225);
const total = computed(() => base.value * 2);

function incrementar53225() {
  base.value++;
}
</script>
