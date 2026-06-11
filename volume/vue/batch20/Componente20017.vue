<template>
  <section class="panel-20017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20017");
const base = ref(20017);
const total = computed(() => base.value * 2);

function incrementar20017() {
  base.value++;
}
</script>
