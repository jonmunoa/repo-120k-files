// fichero 13226 -- macros y constantes -- MODIFICADO
#define LIMITE_13226 13426
#define FACTOR_13226 3

int aplicar_limite13226(int valor) {
    if (valor > LIMITE_13226) return LIMITE_13226;
    return valor * FACTOR_13226;
}
