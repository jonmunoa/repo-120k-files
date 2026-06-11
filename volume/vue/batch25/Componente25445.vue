<template>
  <section class="panel-25445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25445");
const base = ref(25445);
const total = computed(() => base.value * 2);

function incrementar25445() {
  base.value++;
}
</script>
