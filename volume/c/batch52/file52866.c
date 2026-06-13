// fichero 52866 -- macros y constantes
#define LIMITE_52866 52966
#define FACTOR_52866 2

int aplicar_limite52866(int valor) {
    if (valor > LIMITE_52866) return LIMITE_52866;
    return valor * FACTOR_52866;
}
