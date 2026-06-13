// fichero 53226 -- macros y constantes
#define LIMITE_53226 53326
#define FACTOR_53226 2

int aplicar_limite53226(int valor) {
    if (valor > LIMITE_53226) return LIMITE_53226;
    return valor * FACTOR_53226;
}
