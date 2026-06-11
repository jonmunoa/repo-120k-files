<template>
  <section class="panel-11325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11325");
const base = ref(11325);
const total = computed(() => base.value * 2);

function incrementar11325() {
  base.value++;
}
</script>
