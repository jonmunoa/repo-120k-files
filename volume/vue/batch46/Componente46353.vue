<template>
  <section class="panel-46353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46353");
const base = ref(46353);
const total = computed(() => base.value * 2);

function incrementar46353() {
  base.value++;
}
</script>
