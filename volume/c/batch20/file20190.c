// fichero 20190 -- macros y constantes -- MODIFICADO
#define LIMITE_20190 20390
#define FACTOR_20190 2

int aplicar_limite20190(int valor) {
    if (valor > LIMITE_20190) return LIMITE_20190;
    return valor * FACTOR_20190;
}
