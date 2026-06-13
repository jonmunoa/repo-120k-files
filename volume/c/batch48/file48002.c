// fichero 48002 -- macros y constantes
#define LIMITE_48002 48102
#define FACTOR_48002 3

int aplicar_limite48002(int valor) {
    if (valor > LIMITE_48002) return LIMITE_48002;
    return valor * FACTOR_48002;
}
