// fichero 38258 -- macros y constantes -- MODIFICADO
#define LIMITE_38258 38458
#define FACTOR_38258 5

int aplicar_limite38258(int valor) {
    if (valor > LIMITE_38258) return LIMITE_38258;
    return valor * FACTOR_38258;
}
