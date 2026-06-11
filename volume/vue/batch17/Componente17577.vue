<template>
  <section class="panel-17577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17577");
const base = ref(17577);
const total = computed(() => base.value * 2);

function incrementar17577() {
  base.value++;
}
</script>
