// fichero 44258 -- macros y constantes -- MODIFICADO
#define LIMITE_44258 44458
#define FACTOR_44258 5

int aplicar_limite44258(int valor) {
    if (valor > LIMITE_44258) return LIMITE_44258;
    return valor * FACTOR_44258;
}
