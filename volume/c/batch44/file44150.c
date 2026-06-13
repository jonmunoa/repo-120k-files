// fichero 44150 -- macros y constantes
#define LIMITE_44150 44250
#define FACTOR_44150 1

int aplicar_limite44150(int valor) {
    if (valor > LIMITE_44150) return LIMITE_44150;
    return valor * FACTOR_44150;
}
