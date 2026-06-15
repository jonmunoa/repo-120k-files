// fichero 41157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41157;

Registro41157 crear_registro41157(int id) {
    Registro41157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
