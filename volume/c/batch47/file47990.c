// fichero 47990 -- macros y constantes -- MODIFICADO
#define LIMITE_47990 48190
#define FACTOR_47990 2

int aplicar_limite47990(int valor) {
    if (valor > LIMITE_47990) return LIMITE_47990;
    return valor * FACTOR_47990;
}
