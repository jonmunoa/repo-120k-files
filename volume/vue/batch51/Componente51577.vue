<template>
  <section class="panel-51577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51577");
const base = ref(51577);
const total = computed(() => base.value * 2);

function incrementar51577() {
  base.value++;
}
</script>
