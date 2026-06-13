// fichero 53838 -- macros y constantes
#define LIMITE_53838 53938
#define FACTOR_53838 4

int aplicar_limite53838(int valor) {
    if (valor > LIMITE_53838) return LIMITE_53838;
    return valor * FACTOR_53838;
}
