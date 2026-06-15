// fichero 41105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41105;

Registro41105 crear_registro41105(int id) {
    Registro41105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
