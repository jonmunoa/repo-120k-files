<template>
  <section class="panel-13181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13181");
const base = ref(13181);
const total = computed(() => base.value * 2);

function incrementar13181() {
  base.value++;
}
</script>
