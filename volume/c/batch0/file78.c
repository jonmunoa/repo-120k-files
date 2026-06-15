// fichero 78 -- macros y constantes -- MODIFICADO
#define LIMITE_78 278
#define FACTOR_78 5

int aplicar_limite78(int valor) {
    if (valor > LIMITE_78) return LIMITE_78;
    return valor * FACTOR_78;
}
