<template>
  <section class="panel-37073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37073");
const base = ref(37073);
const total = computed(() => base.value * 2);

function incrementar37073() {
  base.value++;
}
</script>
