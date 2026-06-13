// fichero 44814 -- macros y constantes
#define LIMITE_44814 44914
#define FACTOR_44814 5

int aplicar_limite44814(int valor) {
    if (valor > LIMITE_44814) return LIMITE_44814;
    return valor * FACTOR_44814;
}
