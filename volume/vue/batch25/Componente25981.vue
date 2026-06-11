<template>
  <section class="panel-25981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25981");
const base = ref(25981);
const total = computed(() => base.value * 2);

function incrementar25981() {
  base.value++;
}
</script>
