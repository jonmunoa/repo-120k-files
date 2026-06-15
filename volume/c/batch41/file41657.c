// fichero 41657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41657;

Registro41657 crear_registro41657(int id) {
    Registro41657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
