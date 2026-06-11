<template>
  <section class="panel-13697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13697");
const base = ref(13697);
const total = computed(() => base.value * 2);

function incrementar13697() {
  base.value++;
}
</script>
