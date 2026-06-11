<template>
  <section class="panel-55425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55425");
const base = ref(55425);
const total = computed(() => base.value * 2);

function incrementar55425() {
  base.value++;
}
</script>
