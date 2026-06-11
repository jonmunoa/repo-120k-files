<template>
  <section class="panel-22821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22821");
const base = ref(22821);
const total = computed(() => base.value * 2);

function incrementar22821() {
  base.value++;
}
</script>
