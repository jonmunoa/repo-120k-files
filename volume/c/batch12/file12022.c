// fichero 12022 -- macros y constantes -- MODIFICADO
#define LIMITE_12022 12222
#define FACTOR_12022 4

int aplicar_limite12022(int valor) {
    if (valor > LIMITE_12022) return LIMITE_12022;
    return valor * FACTOR_12022;
}
