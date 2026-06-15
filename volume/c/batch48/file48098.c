// fichero 48098 -- macros y constantes -- MODIFICADO
#define LIMITE_48098 48298
#define FACTOR_48098 5

int aplicar_limite48098(int valor) {
    if (valor > LIMITE_48098) return LIMITE_48098;
    return valor * FACTOR_48098;
}
