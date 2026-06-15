// fichero 28042 -- macros y constantes -- MODIFICADO
#define LIMITE_28042 28242
#define FACTOR_28042 4

int aplicar_limite28042(int valor) {
    if (valor > LIMITE_28042) return LIMITE_28042;
    return valor * FACTOR_28042;
}
