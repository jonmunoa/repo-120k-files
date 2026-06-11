<template>
  <section class="panel-22325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22325");
const base = ref(22325);
const total = computed(() => base.value * 2);

function incrementar22325() {
  base.value++;
}
</script>
