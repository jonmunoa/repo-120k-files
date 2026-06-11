<template>
  <section class="panel-36637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36637");
const base = ref(36637);
const total = computed(() => base.value * 2);

function incrementar36637() {
  base.value++;
}
</script>
