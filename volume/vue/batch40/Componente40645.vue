<template>
  <section class="panel-40645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40645");
const base = ref(40645);
const total = computed(() => base.value * 2);

function incrementar40645() {
  base.value++;
}
</script>
