<template>
  <section class="panel-24337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24337");
const base = ref(24337);
const total = computed(() => base.value * 2);

function incrementar24337() {
  base.value++;
}
</script>
