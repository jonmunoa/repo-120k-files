// fichero 41226 -- macros y constantes
#define LIMITE_41226 41326
#define FACTOR_41226 2

int aplicar_limite41226(int valor) {
    if (valor > LIMITE_41226) return LIMITE_41226;
    return valor * FACTOR_41226;
}
