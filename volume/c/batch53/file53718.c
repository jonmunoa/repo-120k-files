// fichero 53718 -- macros y constantes
#define LIMITE_53718 53818
#define FACTOR_53718 4

int aplicar_limite53718(int valor) {
    if (valor > LIMITE_53718) return LIMITE_53718;
    return valor * FACTOR_53718;
}
