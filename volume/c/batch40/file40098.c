// fichero 40098 -- macros y constantes -- MODIFICADO
#define LIMITE_40098 40298
#define FACTOR_40098 5

int aplicar_limite40098(int valor) {
    if (valor > LIMITE_40098) return LIMITE_40098;
    return valor * FACTOR_40098;
}
