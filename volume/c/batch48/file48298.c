// fichero 48298 -- macros y constantes -- MODIFICADO
#define LIMITE_48298 48498
#define FACTOR_48298 5

int aplicar_limite48298(int valor) {
    if (valor > LIMITE_48298) return LIMITE_48298;
    return valor * FACTOR_48298;
}
