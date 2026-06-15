// fichero 19458 -- macros y constantes -- MODIFICADO
#define LIMITE_19458 19658
#define FACTOR_19458 5

int aplicar_limite19458(int valor) {
    if (valor > LIMITE_19458) return LIMITE_19458;
    return valor * FACTOR_19458;
}
