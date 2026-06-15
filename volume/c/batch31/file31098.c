// fichero 31098 -- macros y constantes -- MODIFICADO
#define LIMITE_31098 31298
#define FACTOR_31098 5

int aplicar_limite31098(int valor) {
    if (valor > LIMITE_31098) return LIMITE_31098;
    return valor * FACTOR_31098;
}
