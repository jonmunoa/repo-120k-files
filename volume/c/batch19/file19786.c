// fichero 19786 -- macros y constantes -- MODIFICADO
#define LIMITE_19786 19986
#define FACTOR_19786 3

int aplicar_limite19786(int valor) {
    if (valor > LIMITE_19786) return LIMITE_19786;
    return valor * FACTOR_19786;
}
