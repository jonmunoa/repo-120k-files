<template>
  <section class="panel-39121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39121");
const base = ref(39121);
const total = computed(() => base.value * 2);

function incrementar39121() {
  base.value++;
}
</script>
