<template>
  <section class="panel-37961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37961");
const base = ref(37961);
const total = computed(() => base.value * 2);

function incrementar37961() {
  base.value++;
}
</script>
