<template>
  <section class="panel-55845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55845");
const base = ref(55845);
const total = computed(() => base.value * 2);

function incrementar55845() {
  base.value++;
}
</script>
