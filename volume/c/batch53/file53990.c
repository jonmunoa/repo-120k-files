// fichero 53990 -- macros y constantes
#define LIMITE_53990 54090
#define FACTOR_53990 1

int aplicar_limite53990(int valor) {
    if (valor > LIMITE_53990) return LIMITE_53990;
    return valor * FACTOR_53990;
}
