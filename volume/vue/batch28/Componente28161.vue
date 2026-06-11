<template>
  <section class="panel-28161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28161");
const base = ref(28161);
const total = computed(() => base.value * 2);

function incrementar28161() {
  base.value++;
}
</script>
