<template>
  <section class="panel-18821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18821");
const base = ref(18821);
const total = computed(() => base.value * 2);

function incrementar18821() {
  base.value++;
}
</script>
