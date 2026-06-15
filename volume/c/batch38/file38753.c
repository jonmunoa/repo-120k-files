// fichero 38753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38753;

Registro38753 crear_registro38753(int id) {
    Registro38753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
