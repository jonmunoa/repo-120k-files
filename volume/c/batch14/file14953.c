// fichero 14953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14953;

Registro14953 crear_registro14953(int id) {
    Registro14953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
