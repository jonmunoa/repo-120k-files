<template>
  <section class="panel-25809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25809");
const base = ref(25809);
const total = computed(() => base.value * 2);

function incrementar25809() {
  base.value++;
}
</script>
