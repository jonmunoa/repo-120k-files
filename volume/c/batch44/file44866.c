// fichero 44866 -- macros y constantes -- MODIFICADO
#define LIMITE_44866 45066
#define FACTOR_44866 3

int aplicar_limite44866(int valor) {
    if (valor > LIMITE_44866) return LIMITE_44866;
    return valor * FACTOR_44866;
}
