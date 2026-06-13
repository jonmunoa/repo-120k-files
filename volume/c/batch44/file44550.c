// fichero 44550 -- macros y constantes
#define LIMITE_44550 44650
#define FACTOR_44550 1

int aplicar_limite44550(int valor) {
    if (valor > LIMITE_44550) return LIMITE_44550;
    return valor * FACTOR_44550;
}
