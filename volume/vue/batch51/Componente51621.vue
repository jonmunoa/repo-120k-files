<template>
  <section class="panel-51621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51621");
const base = ref(51621);
const total = computed(() => base.value * 2);

function incrementar51621() {
  base.value++;
}
</script>
