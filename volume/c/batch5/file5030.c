// fichero 5030 -- macros y constantes -- MODIFICADO
#define LIMITE_5030 5230
#define FACTOR_5030 2

int aplicar_limite5030(int valor) {
    if (valor > LIMITE_5030) return LIMITE_5030;
    return valor * FACTOR_5030;
}
