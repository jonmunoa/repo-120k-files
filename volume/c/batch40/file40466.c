// fichero 40466 -- macros y constantes -- MODIFICADO
#define LIMITE_40466 40666
#define FACTOR_40466 3

int aplicar_limite40466(int valor) {
    if (valor > LIMITE_40466) return LIMITE_40466;
    return valor * FACTOR_40466;
}
