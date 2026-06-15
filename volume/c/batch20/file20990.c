// fichero 20990 -- macros y constantes -- MODIFICADO
#define LIMITE_20990 21190
#define FACTOR_20990 2

int aplicar_limite20990(int valor) {
    if (valor > LIMITE_20990) return LIMITE_20990;
    return valor * FACTOR_20990;
}
