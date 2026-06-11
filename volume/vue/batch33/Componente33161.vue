<template>
  <section class="panel-33161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33161");
const base = ref(33161);
const total = computed(() => base.value * 2);

function incrementar33161() {
  base.value++;
}
</script>
