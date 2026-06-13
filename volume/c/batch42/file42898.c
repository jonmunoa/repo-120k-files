// fichero 42898 -- macros y constantes
#define LIMITE_42898 42998
#define FACTOR_42898 4

int aplicar_limite42898(int valor) {
    if (valor > LIMITE_42898) return LIMITE_42898;
    return valor * FACTOR_42898;
}
