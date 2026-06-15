// fichero 29986 -- macros y constantes -- MODIFICADO
#define LIMITE_29986 30186
#define FACTOR_29986 3

int aplicar_limite29986(int valor) {
    if (valor > LIMITE_29986) return LIMITE_29986;
    return valor * FACTOR_29986;
}
