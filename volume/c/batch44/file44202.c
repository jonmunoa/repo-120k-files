// fichero 44202 -- macros y constantes -- MODIFICADO
#define LIMITE_44202 44402
#define FACTOR_44202 4

int aplicar_limite44202(int valor) {
    if (valor > LIMITE_44202) return LIMITE_44202;
    return valor * FACTOR_44202;
}
