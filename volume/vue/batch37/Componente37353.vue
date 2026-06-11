<template>
  <section class="panel-37353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37353");
const base = ref(37353);
const total = computed(() => base.value * 2);

function incrementar37353() {
  base.value++;
}
</script>
