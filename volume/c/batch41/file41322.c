// fichero 41322 -- macros y constantes -- MODIFICADO
#define LIMITE_41322 41522
#define FACTOR_41322 4

int aplicar_limite41322(int valor) {
    if (valor > LIMITE_41322) return LIMITE_41322;
    return valor * FACTOR_41322;
}
