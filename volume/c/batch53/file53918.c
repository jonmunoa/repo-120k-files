// fichero 53918 -- macros y constantes
#define LIMITE_53918 54018
#define FACTOR_53918 4

int aplicar_limite53918(int valor) {
    if (valor > LIMITE_53918) return LIMITE_53918;
    return valor * FACTOR_53918;
}
