<template>
  <section class="panel-25541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25541");
const base = ref(25541);
const total = computed(() => base.value * 2);

function incrementar25541() {
  base.value++;
}
</script>
