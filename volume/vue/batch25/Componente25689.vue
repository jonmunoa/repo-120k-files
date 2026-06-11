<template>
  <section class="panel-25689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25689");
const base = ref(25689);
const total = computed(() => base.value * 2);

function incrementar25689() {
  base.value++;
}
</script>
