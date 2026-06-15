// fichero 98 -- macros y constantes -- MODIFICADO
#define LIMITE_98 298
#define FACTOR_98 5

int aplicar_limite98(int valor) {
    if (valor > LIMITE_98) return LIMITE_98;
    return valor * FACTOR_98;
}
