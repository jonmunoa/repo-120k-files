<template>
  <section class="panel-37577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37577");
const base = ref(37577);
const total = computed(() => base.value * 2);

function incrementar37577() {
  base.value++;
}
</script>
