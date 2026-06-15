// fichero 44610 -- macros y constantes -- MODIFICADO
#define LIMITE_44610 44810
#define FACTOR_44610 2

int aplicar_limite44610(int valor) {
    if (valor > LIMITE_44610) return LIMITE_44610;
    return valor * FACTOR_44610;
}
