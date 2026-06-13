// fichero 44753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44753;

Registro44753 crear_registro44753(int id) {
    Registro44753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44753(Registro44753 r) {
    return r.valor + r.id;
}
