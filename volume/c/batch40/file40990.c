// fichero 40990 -- macros y constantes
#define LIMITE_40990 41090
#define FACTOR_40990 1

int aplicar_limite40990(int valor) {
    if (valor > LIMITE_40990) return LIMITE_40990;
    return valor * FACTOR_40990;
}
