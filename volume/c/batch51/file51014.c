// fichero 51014 -- macros y constantes
#define LIMITE_51014 51114
#define FACTOR_51014 5

int aplicar_limite51014(int valor) {
    if (valor > LIMITE_51014) return LIMITE_51014;
    return valor * FACTOR_51014;
}
