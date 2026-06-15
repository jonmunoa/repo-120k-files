// fichero 40458 -- macros y constantes -- MODIFICADO
#define LIMITE_40458 40658
#define FACTOR_40458 5

int aplicar_limite40458(int valor) {
    if (valor > LIMITE_40458) return LIMITE_40458;
    return valor * FACTOR_40458;
}
