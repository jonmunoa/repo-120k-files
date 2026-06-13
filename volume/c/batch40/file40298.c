// fichero 40298 -- macros y constantes
#define LIMITE_40298 40398
#define FACTOR_40298 4

int aplicar_limite40298(int valor) {
    if (valor > LIMITE_40298) return LIMITE_40298;
    return valor * FACTOR_40298;
}
