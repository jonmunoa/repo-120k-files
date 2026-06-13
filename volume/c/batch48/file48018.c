// fichero 48018 -- macros y constantes
#define LIMITE_48018 48118
#define FACTOR_48018 4

int aplicar_limite48018(int valor) {
    if (valor > LIMITE_48018) return LIMITE_48018;
    return valor * FACTOR_48018;
}
