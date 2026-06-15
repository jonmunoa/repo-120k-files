// fichero 38434 -- macros y constantes -- MODIFICADO
#define LIMITE_38434 38634
#define FACTOR_38434 6

int aplicar_limite38434(int valor) {
    if (valor > LIMITE_38434) return LIMITE_38434;
    return valor * FACTOR_38434;
}
