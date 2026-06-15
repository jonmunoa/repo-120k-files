// fichero 49718 -- macros y constantes -- MODIFICADO
#define LIMITE_49718 49918
#define FACTOR_49718 5

int aplicar_limite49718(int valor) {
    if (valor > LIMITE_49718) return LIMITE_49718;
    return valor * FACTOR_49718;
}
