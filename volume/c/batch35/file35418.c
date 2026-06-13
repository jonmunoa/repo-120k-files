// fichero 35418 -- macros y constantes
#define LIMITE_35418 35518
#define FACTOR_35418 4

int aplicar_limite35418(int valor) {
    if (valor > LIMITE_35418) return LIMITE_35418;
    return valor * FACTOR_35418;
}
