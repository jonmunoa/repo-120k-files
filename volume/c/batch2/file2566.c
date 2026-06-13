// fichero 2566 -- macros y constantes
#define LIMITE_2566 2666
#define FACTOR_2566 2

int aplicar_limite2566(int valor) {
    if (valor > LIMITE_2566) return LIMITE_2566;
    return valor * FACTOR_2566;
}
