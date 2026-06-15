// fichero 40298 -- macros y constantes -- MODIFICADO
#define LIMITE_40298 40498
#define FACTOR_40298 5

int aplicar_limite40298(int valor) {
    if (valor > LIMITE_40298) return LIMITE_40298;
    return valor * FACTOR_40298;
}
