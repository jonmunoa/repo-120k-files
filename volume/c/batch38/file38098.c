// fichero 38098 -- macros y constantes -- MODIFICADO
#define LIMITE_38098 38298
#define FACTOR_38098 5

int aplicar_limite38098(int valor) {
    if (valor > LIMITE_38098) return LIMITE_38098;
    return valor * FACTOR_38098;
}
