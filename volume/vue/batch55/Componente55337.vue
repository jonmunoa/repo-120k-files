<template>
  <section class="panel-55337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55337");
const base = ref(55337);
const total = computed(() => base.value * 2);

function incrementar55337() {
  base.value++;
}
</script>
