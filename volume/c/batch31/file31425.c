// fichero 31425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31425;

Registro31425 crear_registro31425(int id) {
    Registro31425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
