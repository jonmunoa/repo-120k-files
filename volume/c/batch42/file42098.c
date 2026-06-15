// fichero 42098 -- macros y constantes -- MODIFICADO
#define LIMITE_42098 42298
#define FACTOR_42098 5

int aplicar_limite42098(int valor) {
    if (valor > LIMITE_42098) return LIMITE_42098;
    return valor * FACTOR_42098;
}
