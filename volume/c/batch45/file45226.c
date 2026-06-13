// fichero 45226 -- macros y constantes
#define LIMITE_45226 45326
#define FACTOR_45226 2

int aplicar_limite45226(int valor) {
    if (valor > LIMITE_45226) return LIMITE_45226;
    return valor * FACTOR_45226;
}
