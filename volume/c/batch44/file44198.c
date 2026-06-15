// fichero 44198 -- macros y constantes -- MODIFICADO
#define LIMITE_44198 44398
#define FACTOR_44198 5

int aplicar_limite44198(int valor) {
    if (valor > LIMITE_44198) return LIMITE_44198;
    return valor * FACTOR_44198;
}
