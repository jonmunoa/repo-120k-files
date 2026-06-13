// fichero 48410 -- macros y constantes
#define LIMITE_48410 48510
#define FACTOR_48410 1

int aplicar_limite48410(int valor) {
    if (valor > LIMITE_48410) return LIMITE_48410;
    return valor * FACTOR_48410;
}
