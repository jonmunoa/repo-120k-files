// fichero 30226 -- macros y constantes -- MODIFICADO
#define LIMITE_30226 30426
#define FACTOR_30226 3

int aplicar_limite30226(int valor) {
    if (valor > LIMITE_30226) return LIMITE_30226;
    return valor * FACTOR_30226;
}
