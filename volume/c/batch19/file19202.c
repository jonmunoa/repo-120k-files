// fichero 19202 -- macros y constantes -- MODIFICADO
#define LIMITE_19202 19402
#define FACTOR_19202 4

int aplicar_limite19202(int valor) {
    if (valor > LIMITE_19202) return LIMITE_19202;
    return valor * FACTOR_19202;
}
