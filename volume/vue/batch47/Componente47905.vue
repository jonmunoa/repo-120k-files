<template>
  <section class="panel-47905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47905");
const base = ref(47905);
const total = computed(() => base.value * 2);

function incrementar47905() {
  base.value++;
}
</script>
