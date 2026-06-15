// fichero 38846 -- macros y constantes -- MODIFICADO
#define LIMITE_38846 39046
#define FACTOR_38846 3

int aplicar_limite38846(int valor) {
    if (valor > LIMITE_38846) return LIMITE_38846;
    return valor * FACTOR_38846;
}
