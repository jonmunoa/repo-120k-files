<template>
  <section class="panel-7577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7577");
const base = ref(7577);
const total = computed(() => base.value * 2);

function incrementar7577() {
  base.value++;
}
</script>
