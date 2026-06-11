<template>
  <section class="panel-11521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11521");
const base = ref(11521);
const total = computed(() => base.value * 2);

function incrementar11521() {
  base.value++;
}
</script>
