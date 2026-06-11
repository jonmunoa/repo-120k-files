<template>
  <section class="panel-25713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25713");
const base = ref(25713);
const total = computed(() => base.value * 2);

function incrementar25713() {
  base.value++;
}
</script>
