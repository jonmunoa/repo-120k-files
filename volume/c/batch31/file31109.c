// fichero 31109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31109;

Registro31109 crear_registro31109(int id) {
    Registro31109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
