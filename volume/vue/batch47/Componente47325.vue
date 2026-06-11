<template>
  <section class="panel-47325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47325");
const base = ref(47325);
const total = computed(() => base.value * 2);

function incrementar47325() {
  base.value++;
}
</script>
