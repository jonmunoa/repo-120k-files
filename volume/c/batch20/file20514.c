// fichero 20514 -- macros y constantes -- MODIFICADO
#define LIMITE_20514 20714
#define FACTOR_20514 6

int aplicar_limite20514(int valor) {
    if (valor > LIMITE_20514) return LIMITE_20514;
    return valor * FACTOR_20514;
}
