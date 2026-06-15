// fichero 42638 -- macros y constantes -- MODIFICADO
#define LIMITE_42638 42838
#define FACTOR_42638 5

int aplicar_limite42638(int valor) {
    if (valor > LIMITE_42638) return LIMITE_42638;
    return valor * FACTOR_42638;
}
