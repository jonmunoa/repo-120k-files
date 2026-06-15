// fichero 20937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20937;

Registro20937 crear_registro20937(int id) {
    Registro20937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
