// fichero 25458 -- macros y constantes -- MODIFICADO
#define LIMITE_25458 25658
#define FACTOR_25458 5

int aplicar_limite25458(int valor) {
    if (valor > LIMITE_25458) return LIMITE_25458;
    return valor * FACTOR_25458;
}
