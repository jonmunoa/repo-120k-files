// fichero 45226 -- macros y constantes -- MODIFICADO
#define LIMITE_45226 45426
#define FACTOR_45226 3

int aplicar_limite45226(int valor) {
    if (valor > LIMITE_45226) return LIMITE_45226;
    return valor * FACTOR_45226;
}
