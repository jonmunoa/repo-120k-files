// fichero 44814 -- macros y constantes -- MODIFICADO
#define LIMITE_44814 45014
#define FACTOR_44814 6

int aplicar_limite44814(int valor) {
    if (valor > LIMITE_44814) return LIMITE_44814;
    return valor * FACTOR_44814;
}
