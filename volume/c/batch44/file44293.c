// fichero 44293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44293;

Registro44293 crear_registro44293(int id) {
    Registro44293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
