<template>
  <section class="panel-25877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25877");
const base = ref(25877);
const total = computed(() => base.value * 2);

function incrementar25877() {
  base.value++;
}
</script>
