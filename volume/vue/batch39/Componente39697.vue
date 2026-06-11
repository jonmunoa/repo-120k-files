<template>
  <section class="panel-39697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39697");
const base = ref(39697);
const total = computed(() => base.value * 2);

function incrementar39697() {
  base.value++;
}
</script>
