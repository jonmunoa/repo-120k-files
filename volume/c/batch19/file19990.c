// fichero 19990 -- macros y constantes
#define LIMITE_19990 20090
#define FACTOR_19990 1

int aplicar_limite19990(int valor) {
    if (valor > LIMITE_19990) return LIMITE_19990;
    return valor * FACTOR_19990;
}
