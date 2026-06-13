// fichero 53818 -- macros y constantes
#define LIMITE_53818 53918
#define FACTOR_53818 4

int aplicar_limite53818(int valor) {
    if (valor > LIMITE_53818) return LIMITE_53818;
    return valor * FACTOR_53818;
}
