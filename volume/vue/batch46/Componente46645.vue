<template>
  <section class="panel-46645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46645");
const base = ref(46645);
const total = computed(() => base.value * 2);

function incrementar46645() {
  base.value++;
}
</script>
