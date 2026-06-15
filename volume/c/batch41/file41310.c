// fichero 41310 -- macros y constantes -- MODIFICADO
#define LIMITE_41310 41510
#define FACTOR_41310 2

int aplicar_limite41310(int valor) {
    if (valor > LIMITE_41310) return LIMITE_41310;
    return valor * FACTOR_41310;
}
