<template>
  <section class="panel-50161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50161");
const base = ref(50161);
const total = computed(() => base.value * 2);

function incrementar50161() {
  base.value++;
}
</script>
