// fichero 44610 -- macros y constantes
#define LIMITE_44610 44710
#define FACTOR_44610 1

int aplicar_limite44610(int valor) {
    if (valor > LIMITE_44610) return LIMITE_44610;
    return valor * FACTOR_44610;
}
