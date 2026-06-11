<template>
  <section class="panel-22769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22769");
const base = ref(22769);
const total = computed(() => base.value * 2);

function incrementar22769() {
  base.value++;
}
</script>
