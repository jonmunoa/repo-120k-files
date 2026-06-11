<template>
  <section class="panel-45913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45913");
const base = ref(45913);
const total = computed(() => base.value * 2);

function incrementar45913() {
  base.value++;
}
</script>
