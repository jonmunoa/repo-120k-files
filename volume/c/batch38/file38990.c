// fichero 38990 -- macros y constantes
#define LIMITE_38990 39090
#define FACTOR_38990 1

int aplicar_limite38990(int valor) {
    if (valor > LIMITE_38990) return LIMITE_38990;
    return valor * FACTOR_38990;
}
