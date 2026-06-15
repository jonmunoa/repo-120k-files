// fichero 36397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36397;

Registro36397 crear_registro36397(int id) {
    Registro36397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
