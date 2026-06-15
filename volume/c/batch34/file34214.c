// fichero 34214 -- macros y constantes -- MODIFICADO
#define LIMITE_34214 34414
#define FACTOR_34214 6

int aplicar_limite34214(int valor) {
    if (valor > LIMITE_34214) return LIMITE_34214;
    return valor * FACTOR_34214;
}
