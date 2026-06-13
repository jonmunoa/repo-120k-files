// fichero 52154 -- macros y constantes
#define LIMITE_52154 52254
#define FACTOR_52154 5

int aplicar_limite52154(int valor) {
    if (valor > LIMITE_52154) return LIMITE_52154;
    return valor * FACTOR_52154;
}
