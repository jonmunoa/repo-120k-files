// fichero 25186 -- macros y constantes
#define LIMITE_25186 25286
#define FACTOR_25186 2

int aplicar_limite25186(int valor) {
    if (valor > LIMITE_25186) return LIMITE_25186;
    return valor * FACTOR_25186;
}
