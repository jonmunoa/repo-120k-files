<template>
  <section class="panel-47981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47981");
const base = ref(47981);
const total = computed(() => base.value * 2);

function incrementar47981() {
  base.value++;
}
</script>
