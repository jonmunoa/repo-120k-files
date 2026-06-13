// fichero 51154 -- macros y constantes
#define LIMITE_51154 51254
#define FACTOR_51154 5

int aplicar_limite51154(int valor) {
    if (valor > LIMITE_51154) return LIMITE_51154;
    return valor * FACTOR_51154;
}
