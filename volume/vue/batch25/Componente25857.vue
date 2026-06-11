<template>
  <section class="panel-25857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25857");
const base = ref(25857);
const total = computed(() => base.value * 2);

function incrementar25857() {
  base.value++;
}
</script>
