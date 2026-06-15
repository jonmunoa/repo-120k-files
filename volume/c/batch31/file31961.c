// fichero 31961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31961;

Registro31961 crear_registro31961(int id) {
    Registro31961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
