<template>
  <section class="panel-41121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41121");
const base = ref(41121);
const total = computed(() => base.value * 2);

function incrementar41121() {
  base.value++;
}
</script>
