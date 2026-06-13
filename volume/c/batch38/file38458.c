// fichero 38458 -- macros y constantes
#define LIMITE_38458 38558
#define FACTOR_38458 4

int aplicar_limite38458(int valor) {
    if (valor > LIMITE_38458) return LIMITE_38458;
    return valor * FACTOR_38458;
}
