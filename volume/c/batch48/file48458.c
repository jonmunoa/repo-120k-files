// fichero 48458 -- macros y constantes
#define LIMITE_48458 48558
#define FACTOR_48458 4

int aplicar_limite48458(int valor) {
    if (valor > LIMITE_48458) return LIMITE_48458;
    return valor * FACTOR_48458;
}
