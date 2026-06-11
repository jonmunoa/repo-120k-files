<template>
  <section class="panel-55513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55513");
const base = ref(55513);
const total = computed(() => base.value * 2);

function incrementar55513() {
  base.value++;
}
</script>
