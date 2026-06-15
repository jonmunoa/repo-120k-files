// fichero 48078 -- macros y constantes -- MODIFICADO
#define LIMITE_48078 48278
#define FACTOR_48078 5

int aplicar_limite48078(int valor) {
    if (valor > LIMITE_48078) return LIMITE_48078;
    return valor * FACTOR_48078;
}
