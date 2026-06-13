// fichero 41157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41157;

Registro41157 crear_registro41157(int id) {
    Registro41157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41157(Registro41157 r) {
    return r.valor + r.id;
}
