<template>
  <section class="panel-46621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46621");
const base = ref(46621);
const total = computed(() => base.value * 2);

function incrementar46621() {
  base.value++;
}
</script>
