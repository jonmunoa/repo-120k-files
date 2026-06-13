// fichero 26849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26849;

Registro26849 crear_registro26849(int id) {
    Registro26849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26849(Registro26849 r) {
    return r.valor + r.id;
}
