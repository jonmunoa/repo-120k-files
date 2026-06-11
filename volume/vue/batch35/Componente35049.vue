<template>
  <section class="panel-35049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35049");
const base = ref(35049);
const total = computed(() => base.value * 2);

function incrementar35049() {
  base.value++;
}
</script>
