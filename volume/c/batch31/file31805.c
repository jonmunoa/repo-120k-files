// fichero 31805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31805;

Registro31805 crear_registro31805(int id) {
    Registro31805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
