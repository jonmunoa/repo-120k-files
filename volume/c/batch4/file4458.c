// fichero 4458 -- macros y constantes -- MODIFICADO
#define LIMITE_4458 4658
#define FACTOR_4458 5

int aplicar_limite4458(int valor) {
    if (valor > LIMITE_4458) return LIMITE_4458;
    return valor * FACTOR_4458;
}
