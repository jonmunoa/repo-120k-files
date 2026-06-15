// fichero 7569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7569;

Registro7569 crear_registro7569(int id) {
    Registro7569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
