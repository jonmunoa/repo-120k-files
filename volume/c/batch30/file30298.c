// fichero 30298 -- macros y constantes -- MODIFICADO
#define LIMITE_30298 30498
#define FACTOR_30298 5

int aplicar_limite30298(int valor) {
    if (valor > LIMITE_30298) return LIMITE_30298;
    return valor * FACTOR_30298;
}
