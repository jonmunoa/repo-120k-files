// fichero 27366 -- macros y constantes -- MODIFICADO
#define LIMITE_27366 27566
#define FACTOR_27366 3

int aplicar_limite27366(int valor) {
    if (valor > LIMITE_27366) return LIMITE_27366;
    return valor * FACTOR_27366;
}
