<template>
  <section class="panel-5577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5577");
const base = ref(5577);
const total = computed(() => base.value * 2);

function incrementar5577() {
  base.value++;
}
</script>
