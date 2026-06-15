// fichero 18638 -- macros y constantes -- MODIFICADO
#define LIMITE_18638 18838
#define FACTOR_18638 5

int aplicar_limite18638(int valor) {
    if (valor > LIMITE_18638) return LIMITE_18638;
    return valor * FACTOR_18638;
}
