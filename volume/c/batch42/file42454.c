// fichero 42454 -- macros y constantes
#define LIMITE_42454 42554
#define FACTOR_42454 5

int aplicar_limite42454(int valor) {
    if (valor > LIMITE_42454) return LIMITE_42454;
    return valor * FACTOR_42454;
}
