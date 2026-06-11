<template>
  <section class="panel-46097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46097");
const base = ref(46097);
const total = computed(() => base.value * 2);

function incrementar46097() {
  base.value++;
}
</script>
