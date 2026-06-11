<template>
  <section class="panel-11229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11229");
const base = ref(11229);
const total = computed(() => base.value * 2);

function incrementar11229() {
  base.value++;
}
</script>
