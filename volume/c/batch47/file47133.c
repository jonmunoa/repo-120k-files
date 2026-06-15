// fichero 47133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47133;

Registro47133 crear_registro47133(int id) {
    Registro47133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
