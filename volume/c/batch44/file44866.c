// fichero 44866 -- macros y constantes
#define LIMITE_44866 44966
#define FACTOR_44866 2

int aplicar_limite44866(int valor) {
    if (valor > LIMITE_44866) return LIMITE_44866;
    return valor * FACTOR_44866;
}
