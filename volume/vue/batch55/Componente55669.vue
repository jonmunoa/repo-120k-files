<template>
  <section class="panel-55669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55669");
const base = ref(55669);
const total = computed(() => base.value * 2);

function incrementar55669() {
  base.value++;
}
</script>
