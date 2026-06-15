// fichero 11726 -- macros y constantes -- MODIFICADO
#define LIMITE_11726 11926
#define FACTOR_11726 3

int aplicar_limite11726(int valor) {
    if (valor > LIMITE_11726) return LIMITE_11726;
    return valor * FACTOR_11726;
}
