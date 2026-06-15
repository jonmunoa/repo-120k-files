// fichero 10314 -- macros y constantes -- MODIFICADO
#define LIMITE_10314 10514
#define FACTOR_10314 6

int aplicar_limite10314(int valor) {
    if (valor > LIMITE_10314) return LIMITE_10314;
    return valor * FACTOR_10314;
}
