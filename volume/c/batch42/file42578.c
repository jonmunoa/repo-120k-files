// fichero 42578 -- macros y constantes
#define LIMITE_42578 42678
#define FACTOR_42578 4

int aplicar_limite42578(int valor) {
    if (valor > LIMITE_42578) return LIMITE_42578;
    return valor * FACTOR_42578;
}
