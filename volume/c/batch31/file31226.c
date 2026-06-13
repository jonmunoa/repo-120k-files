// fichero 31226 -- macros y constantes
#define LIMITE_31226 31326
#define FACTOR_31226 2

int aplicar_limite31226(int valor) {
    if (valor > LIMITE_31226) return LIMITE_31226;
    return valor * FACTOR_31226;
}
