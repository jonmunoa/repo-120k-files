// fichero 49550 -- macros y constantes -- MODIFICADO
#define LIMITE_49550 49750
#define FACTOR_49550 2

int aplicar_limite49550(int valor) {
    if (valor > LIMITE_49550) return LIMITE_49550;
    return valor * FACTOR_49550;
}
