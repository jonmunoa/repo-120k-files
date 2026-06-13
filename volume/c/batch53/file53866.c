// fichero 53866 -- macros y constantes
#define LIMITE_53866 53966
#define FACTOR_53866 2

int aplicar_limite53866(int valor) {
    if (valor > LIMITE_53866) return LIMITE_53866;
    return valor * FACTOR_53866;
}
