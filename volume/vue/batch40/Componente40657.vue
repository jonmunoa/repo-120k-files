<template>
  <section class="panel-40657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40657");
const base = ref(40657);
const total = computed(() => base.value * 2);

function incrementar40657() {
  base.value++;
}
</script>
