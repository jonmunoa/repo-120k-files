// fichero 41762 -- macros y constantes
#define LIMITE_41762 41862
#define FACTOR_41762 3

int aplicar_limite41762(int valor) {
    if (valor > LIMITE_41762) return LIMITE_41762;
    return valor * FACTOR_41762;
}
