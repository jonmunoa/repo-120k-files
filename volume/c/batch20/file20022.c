// fichero 20022 -- macros y constantes -- MODIFICADO
#define LIMITE_20022 20222
#define FACTOR_20022 4

int aplicar_limite20022(int valor) {
    if (valor > LIMITE_20022) return LIMITE_20022;
    return valor * FACTOR_20022;
}
