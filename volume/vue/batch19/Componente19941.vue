<template>
  <section class="panel-19941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19941");
const base = ref(19941);
const total = computed(() => base.value * 2);

function incrementar19941() {
  base.value++;
}
</script>
