// fichero 6098 -- macros y constantes -- MODIFICADO
#define LIMITE_6098 6298
#define FACTOR_6098 5

int aplicar_limite6098(int valor) {
    if (valor > LIMITE_6098) return LIMITE_6098;
    return valor * FACTOR_6098;
}
