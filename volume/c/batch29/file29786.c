// fichero 29786 -- macros y constantes -- MODIFICADO
#define LIMITE_29786 29986
#define FACTOR_29786 3

int aplicar_limite29786(int valor) {
    if (valor > LIMITE_29786) return LIMITE_29786;
    return valor * FACTOR_29786;
}
