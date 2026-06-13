// fichero 10693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10693;

Registro10693 crear_registro10693(int id) {
    Registro10693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10693(Registro10693 r) {
    return r.valor + r.id;
}
