// fichero 27458 -- macros y constantes
#define LIMITE_27458 27558
#define FACTOR_27458 4

int aplicar_limite27458(int valor) {
    if (valor > LIMITE_27458) return LIMITE_27458;
    return valor * FACTOR_27458;
}
