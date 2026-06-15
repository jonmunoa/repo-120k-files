// fichero 22514 -- macros y constantes -- MODIFICADO
#define LIMITE_22514 22714
#define FACTOR_22514 6

int aplicar_limite22514(int valor) {
    if (valor > LIMITE_22514) return LIMITE_22514;
    return valor * FACTOR_22514;
}
