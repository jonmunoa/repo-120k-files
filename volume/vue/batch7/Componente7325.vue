<template>
  <section class="panel-7325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7325");
const base = ref(7325);
const total = computed(() => base.value * 2);

function incrementar7325() {
  base.value++;
}
</script>
