<template>
  <section class="panel-46349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46349");
const base = ref(46349);
const total = computed(() => base.value * 2);

function incrementar46349() {
  base.value++;
}
</script>
