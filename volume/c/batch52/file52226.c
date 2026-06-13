// fichero 52226 -- macros y constantes
#define LIMITE_52226 52326
#define FACTOR_52226 2

int aplicar_limite52226(int valor) {
    if (valor > LIMITE_52226) return LIMITE_52226;
    return valor * FACTOR_52226;
}
