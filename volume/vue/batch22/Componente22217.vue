<template>
  <section class="panel-22217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22217");
const base = ref(22217);
const total = computed(() => base.value * 2);

function incrementar22217() {
  base.value++;
}
</script>
