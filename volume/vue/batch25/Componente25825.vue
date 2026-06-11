<template>
  <section class="panel-25825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25825");
const base = ref(25825);
const total = computed(() => base.value * 2);

function incrementar25825() {
  base.value++;
}
</script>
