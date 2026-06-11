<template>
  <section class="panel-34577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34577");
const base = ref(34577);
const total = computed(() => base.value * 2);

function incrementar34577() {
  base.value++;
}
</script>
