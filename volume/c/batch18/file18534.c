// fichero 18534 -- macros y constantes -- MODIFICADO
#define LIMITE_18534 18734
#define FACTOR_18534 6

int aplicar_limite18534(int valor) {
    if (valor > LIMITE_18534) return LIMITE_18534;
    return valor * FACTOR_18534;
}
