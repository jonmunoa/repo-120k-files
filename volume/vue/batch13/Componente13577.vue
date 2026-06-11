<template>
  <section class="panel-13577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13577");
const base = ref(13577);
const total = computed(() => base.value * 2);

function incrementar13577() {
  base.value++;
}
</script>
