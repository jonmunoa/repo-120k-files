<template>
  <section class="panel-25261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25261");
const base = ref(25261);
const total = computed(() => base.value * 2);

function incrementar25261() {
  base.value++;
}
</script>
