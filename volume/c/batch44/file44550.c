// fichero 44550 -- macros y constantes -- MODIFICADO
#define LIMITE_44550 44750
#define FACTOR_44550 2

int aplicar_limite44550(int valor) {
    if (valor > LIMITE_44550) return LIMITE_44550;
    return valor * FACTOR_44550;
}
