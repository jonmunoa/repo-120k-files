// fichero 44562 -- macros y constantes
#define LIMITE_44562 44662
#define FACTOR_44562 3

int aplicar_limite44562(int valor) {
    if (valor > LIMITE_44562) return LIMITE_44562;
    return valor * FACTOR_44562;
}
