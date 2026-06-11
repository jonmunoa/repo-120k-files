<template>
  <section class="panel-20097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20097");
const base = ref(20097);
const total = computed(() => base.value * 2);

function incrementar20097() {
  base.value++;
}
</script>
