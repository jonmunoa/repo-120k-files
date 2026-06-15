// fichero 12205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12205;

Registro12205 crear_registro12205(int id) {
    Registro12205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
