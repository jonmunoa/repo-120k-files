<template>
  <section class="panel-35217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35217");
const base = ref(35217);
const total = computed(() => base.value * 2);

function incrementar35217() {
  base.value++;
}
</script>
