// fichero 20990 -- macros y constantes
#define LIMITE_20990 21090
#define FACTOR_20990 1

int aplicar_limite20990(int valor) {
    if (valor > LIMITE_20990) return LIMITE_20990;
    return valor * FACTOR_20990;
}
