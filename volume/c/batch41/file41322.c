// fichero 41322 -- macros y constantes
#define LIMITE_41322 41422
#define FACTOR_41322 3

int aplicar_limite41322(int valor) {
    if (valor > LIMITE_41322) return LIMITE_41322;
    return valor * FACTOR_41322;
}
