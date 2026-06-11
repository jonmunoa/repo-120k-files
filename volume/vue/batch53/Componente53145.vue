<template>
  <section class="panel-53145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53145");
const base = ref(53145);
const total = computed(() => base.value * 2);

function incrementar53145() {
  base.value++;
}
</script>
