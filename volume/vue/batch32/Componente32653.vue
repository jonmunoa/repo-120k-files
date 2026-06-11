<template>
  <section class="panel-32653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32653");
const base = ref(32653);
const total = computed(() => base.value * 2);

function incrementar32653() {
  base.value++;
}
</script>
