// fichero 48514 -- macros y constantes -- MODIFICADO
#define LIMITE_48514 48714
#define FACTOR_48514 6

int aplicar_limite48514(int valor) {
    if (valor > LIMITE_48514) return LIMITE_48514;
    return valor * FACTOR_48514;
}
