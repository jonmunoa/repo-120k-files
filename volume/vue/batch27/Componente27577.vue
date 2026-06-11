<template>
  <section class="panel-27577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27577");
const base = ref(27577);
const total = computed(() => base.value * 2);

function incrementar27577() {
  base.value++;
}
</script>
