<template>
  <section class="panel-25217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25217");
const base = ref(25217);
const total = computed(() => base.value * 2);

function incrementar25217() {
  base.value++;
}
</script>
