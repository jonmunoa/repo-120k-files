// fichero 29022 -- macros y constantes -- MODIFICADO
#define LIMITE_29022 29222
#define FACTOR_29022 4

int aplicar_limite29022(int valor) {
    if (valor > LIMITE_29022) return LIMITE_29022;
    return valor * FACTOR_29022;
}
