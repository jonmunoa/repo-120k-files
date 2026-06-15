// fichero 42190 -- macros y constantes -- MODIFICADO
#define LIMITE_42190 42390
#define FACTOR_42190 2

int aplicar_limite42190(int valor) {
    if (valor > LIMITE_42190) return LIMITE_42190;
    return valor * FACTOR_42190;
}
