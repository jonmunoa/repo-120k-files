// fichero 31569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31569;

Registro31569 crear_registro31569(int id) {
    Registro31569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
