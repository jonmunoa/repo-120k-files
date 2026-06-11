<template>
  <section class="panel-25489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25489");
const base = ref(25489);
const total = computed(() => base.value * 2);

function incrementar25489() {
  base.value++;
}
</script>
