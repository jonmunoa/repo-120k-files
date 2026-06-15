// fichero 23018 -- macros y constantes -- MODIFICADO
#define LIMITE_23018 23218
#define FACTOR_23018 5

int aplicar_limite23018(int valor) {
    if (valor > LIMITE_23018) return LIMITE_23018;
    return valor * FACTOR_23018;
}
