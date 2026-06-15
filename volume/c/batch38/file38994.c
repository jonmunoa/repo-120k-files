// fichero 38994 -- macros y constantes -- MODIFICADO
#define LIMITE_38994 39194
#define FACTOR_38994 6

int aplicar_limite38994(int valor) {
    if (valor > LIMITE_38994) return LIMITE_38994;
    return valor * FACTOR_38994;
}
