// fichero 25022 -- macros y constantes -- MODIFICADO
#define LIMITE_25022 25222
#define FACTOR_25022 4

int aplicar_limite25022(int valor) {
    if (valor > LIMITE_25022) return LIMITE_25022;
    return valor * FACTOR_25022;
}
