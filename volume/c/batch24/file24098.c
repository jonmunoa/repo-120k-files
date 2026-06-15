// fichero 24098 -- macros y constantes -- MODIFICADO
#define LIMITE_24098 24298
#define FACTOR_24098 5

int aplicar_limite24098(int valor) {
    if (valor > LIMITE_24098) return LIMITE_24098;
    return valor * FACTOR_24098;
}
