// fichero 4986 -- macros y constantes -- MODIFICADO
#define LIMITE_4986 5186
#define FACTOR_4986 3

int aplicar_limite4986(int valor) {
    if (valor > LIMITE_4986) return LIMITE_4986;
    return valor * FACTOR_4986;
}
