// fichero 7022 -- macros y constantes -- MODIFICADO
#define LIMITE_7022 7222
#define FACTOR_7022 4

int aplicar_limite7022(int valor) {
    if (valor > LIMITE_7022) return LIMITE_7022;
    return valor * FACTOR_7022;
}
