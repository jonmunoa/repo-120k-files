// fichero 41762 -- macros y constantes -- MODIFICADO
#define LIMITE_41762 41962
#define FACTOR_41762 4

int aplicar_limite41762(int valor) {
    if (valor > LIMITE_41762) return LIMITE_41762;
    return valor * FACTOR_41762;
}
