<template>
  <section class="panel-20577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20577");
const base = ref(20577);
const total = computed(() => base.value * 2);

function incrementar20577() {
  base.value++;
}
</script>
