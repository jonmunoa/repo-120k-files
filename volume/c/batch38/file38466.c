// fichero 38466 -- macros y constantes -- MODIFICADO
#define LIMITE_38466 38666
#define FACTOR_38466 3

int aplicar_limite38466(int valor) {
    if (valor > LIMITE_38466) return LIMITE_38466;
    return valor * FACTOR_38466;
}
