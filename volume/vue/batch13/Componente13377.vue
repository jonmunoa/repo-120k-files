<template>
  <section class="panel-13377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13377");
const base = ref(13377);
const total = computed(() => base.value * 2);

function incrementar13377() {
  base.value++;
}
</script>
