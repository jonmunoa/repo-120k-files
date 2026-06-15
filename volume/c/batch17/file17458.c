// fichero 17458 -- macros y constantes -- MODIFICADO
#define LIMITE_17458 17658
#define FACTOR_17458 5

int aplicar_limite17458(int valor) {
    if (valor > LIMITE_17458) return LIMITE_17458;
    return valor * FACTOR_17458;
}
