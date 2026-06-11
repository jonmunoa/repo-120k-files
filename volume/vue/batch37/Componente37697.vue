<template>
  <section class="panel-37697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37697");
const base = ref(37697);
const total = computed(() => base.value * 2);

function incrementar37697() {
  base.value++;
}
</script>
