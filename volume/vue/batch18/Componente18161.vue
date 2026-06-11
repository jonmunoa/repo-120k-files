<template>
  <section class="panel-18161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18161");
const base = ref(18161);
const total = computed(() => base.value * 2);

function incrementar18161() {
  base.value++;
}
</script>
