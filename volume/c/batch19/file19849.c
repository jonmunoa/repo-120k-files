// fichero 19849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19849;

Registro19849 crear_registro19849(int id) {
    Registro19849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19849(Registro19849 r) {
    return r.valor + r.id;
}
