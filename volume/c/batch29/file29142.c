// fichero 29142 -- macros y constantes -- MODIFICADO
#define LIMITE_29142 29342
#define FACTOR_29142 4

int aplicar_limite29142(int valor) {
    if (valor > LIMITE_29142) return LIMITE_29142;
    return valor * FACTOR_29142;
}
