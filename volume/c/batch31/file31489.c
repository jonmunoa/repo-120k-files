// fichero 31489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31489;

Registro31489 crear_registro31489(int id) {
    Registro31489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
