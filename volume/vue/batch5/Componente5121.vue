<template>
  <section class="panel-5121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5121");
const base = ref(5121);
const total = computed(() => base.value * 2);

function incrementar5121() {
  base.value++;
}
</script>
