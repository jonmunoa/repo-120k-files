// fichero 14129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14129;

Registro14129 crear_registro14129(int id) {
    Registro14129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
