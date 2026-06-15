// fichero 41117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41117;

Registro41117 crear_registro41117(int id) {
    Registro41117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
