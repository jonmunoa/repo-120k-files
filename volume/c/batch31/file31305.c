// fichero 31305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31305;

Registro31305 crear_registro31305(int id) {
    Registro31305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
