// fichero 42898 -- macros y constantes -- MODIFICADO
#define LIMITE_42898 43098
#define FACTOR_42898 5

int aplicar_limite42898(int valor) {
    if (valor > LIMITE_42898) return LIMITE_42898;
    return valor * FACTOR_42898;
}
