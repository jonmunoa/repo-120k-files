<template>
  <section class="panel-47577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47577");
const base = ref(47577);
const total = computed(() => base.value * 2);

function incrementar47577() {
  base.value++;
}
</script>
