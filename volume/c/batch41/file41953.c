// fichero 41953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41953;

Registro41953 crear_registro41953(int id) {
    Registro41953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
