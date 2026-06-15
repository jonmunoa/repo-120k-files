// fichero 31314 -- macros y constantes -- MODIFICADO
#define LIMITE_31314 31514
#define FACTOR_31314 6

int aplicar_limite31314(int valor) {
    if (valor > LIMITE_31314) return LIMITE_31314;
    return valor * FACTOR_31314;
}
