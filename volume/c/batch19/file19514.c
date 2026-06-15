// fichero 19514 -- macros y constantes -- MODIFICADO
#define LIMITE_19514 19714
#define FACTOR_19514 6

int aplicar_limite19514(int valor) {
    if (valor > LIMITE_19514) return LIMITE_19514;
    return valor * FACTOR_19514;
}
