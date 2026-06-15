// fichero 42094 -- macros y constantes -- MODIFICADO
#define LIMITE_42094 42294
#define FACTOR_42094 6

int aplicar_limite42094(int valor) {
    if (valor > LIMITE_42094) return LIMITE_42094;
    return valor * FACTOR_42094;
}
