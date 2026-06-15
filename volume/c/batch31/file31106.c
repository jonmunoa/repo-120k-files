// fichero 31106 -- macros y constantes -- MODIFICADO
#define LIMITE_31106 31306
#define FACTOR_31106 3

int aplicar_limite31106(int valor) {
    if (valor > LIMITE_31106) return LIMITE_31106;
    return valor * FACTOR_31106;
}
