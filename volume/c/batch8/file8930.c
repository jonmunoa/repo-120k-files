// fichero 8930 -- macros y constantes -- MODIFICADO
#define LIMITE_8930 9130
#define FACTOR_8930 2

int aplicar_limite8930(int valor) {
    if (valor > LIMITE_8930) return LIMITE_8930;
    return valor * FACTOR_8930;
}
