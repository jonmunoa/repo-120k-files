<template>
  <section class="panel-49821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49821");
const base = ref(49821);
const total = computed(() => base.value * 2);

function incrementar49821() {
  base.value++;
}
</script>
