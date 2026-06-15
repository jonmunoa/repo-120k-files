// fichero 38990 -- macros y constantes -- MODIFICADO
#define LIMITE_38990 39190
#define FACTOR_38990 2

int aplicar_limite38990(int valor) {
    if (valor > LIMITE_38990) return LIMITE_38990;
    return valor * FACTOR_38990;
}
