<template>
  <section class="panel-17121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17121");
const base = ref(17121);
const total = computed(() => base.value * 2);

function incrementar17121() {
  base.value++;
}
</script>
