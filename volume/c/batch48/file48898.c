// fichero 48898 -- macros y constantes -- MODIFICADO
#define LIMITE_48898 49098
#define FACTOR_48898 5

int aplicar_limite48898(int valor) {
    if (valor > LIMITE_48898) return LIMITE_48898;
    return valor * FACTOR_48898;
}
