// fichero 12489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12489;

Registro12489 crear_registro12489(int id) {
    Registro12489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
