<template>
  <section class="panel-46377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46377");
const base = ref(46377);
const total = computed(() => base.value * 2);

function incrementar46377() {
  base.value++;
}
</script>
