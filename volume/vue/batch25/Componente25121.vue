<template>
  <section class="panel-25121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25121");
const base = ref(25121);
const total = computed(() => base.value * 2);

function incrementar25121() {
  base.value++;
}
</script>
